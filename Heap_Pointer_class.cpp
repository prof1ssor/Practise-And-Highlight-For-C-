#include <iostream>

class fun{
    public:
    int side1, side2;

    void setBreath(int a){
        side1 = a;
    }
    void setLength(int b){
        side2 = b;
    }

    int getLength(){
        return side1;
    }
    int getBreath(){
        return side2;
    }

    int area(){
        return side1 * side2;
    }
};

int main(){
    fun *f;
    
    f -> side1 = 10;
    f -> side2 = 12;

    std::cout << f -> getBreath() << " " << f -> getLength() << std::endl;
}
