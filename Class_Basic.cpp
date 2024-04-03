#include <iostream>

class happy{
    private:
    int length = 0;
    int breath = 0;
    
    public:
    int setLength(int l){
        return length = l;
    }
    int setBreath(int b){
        return breath = b;
    }

    int getLength(){
        return length;
    }
    int getBreath(){
        return breath;
    }

    int area(){
        return length * breath;
    }
    int perimeter(){
        return 2 * (length + breath);
    }
};

int main(){
    int len, bre;
    happy s;

    std::cout << "Enter the Length here : ";
    std::cin >> len;

    std::cout << "Enter your Breath here : ";
    std::cin >> bre;

    s.setLength(len);
    s.setBreath(bre);   
    
    std::cout << "\nThe length and breath you have set is : " << s.getLength() << " " << s.getBreath() << " respectivly" << std::endl;
    std::cout << "\nThe are of the rectasngle is : " << s.area() << std::endl;      
    std::cout << "The perimeter of the rectangle is : " << s.perimeter() << std::endl;
}
