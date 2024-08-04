#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>

class Book{
private:
    std::string title;
    std::string author;
    std::string category;
    bool isAvailable;
    
public:
    Book(const std::string& title, const std::string& author, const std::string& category) : title(title), author(author), category(category), isAvailable(true) {}
    
    std::string getTitle() const {return title;}
    std::string getAuthor() const {return author;}
    std::string getCategory() const {return category;}
    bool getAvailability() const {return isAvailable;}
    
    void borrowBook() {isAvailable = false;}
    void returnBook() {isAvailable = true;}
    
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Category: " << category << ", Availability: " << (isAvailable ? "Available" : "Borrowed") << std::endl;
    }
};

class Member{
private:
    std::string Name;
    int MemberId;
    std::vector<std::string> borrowedBooks;
    
public:
    Member(std::string n, int id) : Name(n), MemberId(id) {}
    
    std::string getName() const {return Name;}
    int getId() const {return MemberId;}
    std::vector<std::string>getBooks() const {return borrowedBooks;}
    
    void borrowedBook(const std::string& bookTitle){
        borrowedBooks.push_back(bookTitle);
    }
    
    void returnBook(const std::string& bookTitle){
        borrowedBooks.erase(std::remove(borrowedBooks.begin(), borrowedBooks.end(), bookTitle), borrowedBooks.end());
    }
    void displayDetails() const{
        std::cout << "Name : " << Name << ", Member Id : " << MemberId << ", Borrowed Books: ";
        for(const auto& book : borrowedBooks){
            std::cout << book << " ";
        }
        std::cout << std::endl;
    }
};

class Library{
private:
    std::vector<Book> books;
    std::vector<Member>members;
    
public:
    void addBook(const Book& book){
        books.push_back(book);
    }
    void addMember(const Member& member){
        members.push_back(member);
    }
    
    void borrowBook(int memberId, const std::string& bookTitle){
        for(auto& book : books){
            if (book.getTitle () == bookTitle && book.getAvailability()){
                book.borrowBook();
                for(auto& member : members){
                    if (member.getId() == memberId){
                        member.borrowedBook(bookTitle);
                        std::cout << "Book Borrowed Successfully." << std::endl;
                        return;
                    }
                }
            }
        }
        std::cout << "Cannot borrow book. Because either book is unavailable or the member Id is wrong." << std::endl;
    }
    
    void returnBook(int memberId, const std::string& bookTitle){
        for(auto& book : books){
            if(book.getTitle() == bookTitle && book.getAvailability()){
                book.returnBook();
                for(auto& member : members){
                    if(member.getId() == memberId){
                        member.returnBook(bookTitle);
                        std::cout << "Book returned successfully" << std::endl;
                        return;
                    }
                }
            }
        }
        std::cout << "Cannot return book. Because either bokk is unavailable or the member Id is wrong" << std::endl;
    }
    
    void displayAllBooks(){
        for(const auto& book:books){
            book.display();
        }
    }
    void displayAllMembers(){
        for(const auto& member:members){
            member.displayDetails();
        }
    }
};

int main() {
    Library library;
    int choice;

    do {
        std::cout << "\nLibrary Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Add Member\n";
        std::cout << "3. Borrow Book\n";
        std::cout << "4. Return Book\n";
        std::cout << "5. Display All Books\n";
        std::cout << "6. Display All Members\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string title, author, category;
                std::cout << "Enter title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter author: ";
                std::getline(std::cin, author);
                std::cout << "Enter category: ";
                std::getline(std::cin, category);
                library.addBook(Book(title, author, category));
                break;
            }
            case 2: {
                std::string name;
                int memberId;
                std::cout << "Enter member name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter member ID: ";
                std::cin >> memberId;
                library.addMember(Member(name, memberId));
                break;
            }
            case 3: {
                int memberId;
                std::string bookTitle;
                std::cout << "Enter member ID: ";
                std::cin >> memberId;
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, bookTitle);
                library.borrowBook(memberId, bookTitle);
                break;
            }
            case 4: {
                int memberId;
                std::string bookTitle;
                std::cout << "Enter member ID: ";
                std::cin >> memberId;
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, bookTitle);
                library.returnBook(memberId, bookTitle);
                break;
            }
            case 5:
                library.displayAllBooks();
                break;
            case 6:
                library.displayAllMembers();
                break;
            case 7:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 7);

    return 0;
}
