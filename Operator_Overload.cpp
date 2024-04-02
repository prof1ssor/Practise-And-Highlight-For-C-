#include <iostream>

class complex{
    private:
    int real;
    int img;

    public:
    complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }

    void display(){
        std::cout << real << "+i" << img << std::endl;
    }

    complex operator+(complex C){
        complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};

int main(){
    complex c1(5,3),c2(10,5),c3;

    c3 = c1+c2;

    c3.display();
}
