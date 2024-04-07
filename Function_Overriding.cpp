#include <iostream>

class one{
    public:
    int drive(){
        std::cout << "This is from the first drive output." << std::endl;
    }
};

class two : public one{
    public:
    int drive(){
        std::cout << "This is the output from the second drive output." << std::endl;
    }
};

int main(){
    two t;
    t.one::drive();
    t.drive();
}
