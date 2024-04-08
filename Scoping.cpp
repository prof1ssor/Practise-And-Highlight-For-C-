#include <iostream>

int c = 10;
int main(){
    int c = 22;

    std::cout << c << std::endl;
    std::cout << ::c << std::endl;
}
