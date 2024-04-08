#include <iostream>
template <class T>
    T max(T a, T b){
        if(a > b){
            std::cout << "A is bigger than B" << std::endl;
        }
        else{
            std::cout << "B is bigger than  A" << std::endl;
        }
    }
int main(){
    max(12,33);
    max(55.3,33.5);
}
