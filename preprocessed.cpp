#include <iostream>

#define PI 3.14016
#define msg(x) #x
#define max(x,y) (x>y?x:y)

#ifndef PI
#define PI 3
#endif

int main(){
    std::cout << PI << std::endl;
    std::cout << max(10,12) << std::endl;
    std::cout << msg(HELLO) << std::endl;
}
