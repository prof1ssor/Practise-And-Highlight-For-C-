#include <iostream>

int main(){
    int a = 0;
    while(a<10){
        std::cout << "A is " << a++ << std::endl;
    }
    int b = 0;
    do{
        std::cout << "B is " << b++ << std::endl;
    }while(b < 10);
}
