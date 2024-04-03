#include <iostream>

class derived{
    public:
    void display(int a, int b){
        std::cout << "The multiple of the numbers is : " << a*b << std::endl;
    }
};

struct other:public derived{
    void show(){
        std::cout << "The number you have entered is 0";
    }
};

int main(){
    other d;
    d.display(10,22);
    d.show();
}
