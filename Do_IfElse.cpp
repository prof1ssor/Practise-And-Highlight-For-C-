#include <iostream>

int main(){
    int m,n;
    std::cout << "ENter two no.s " << std::endl;
    
    std::cin >> m >> n;
    
    while(m!=n){
        if(m>n){
            std::cout << "The First number is Bigger and I am subtracting it to be equal." << std::endl;
            m--;
        }else{
            std::cout << "The Second number is Bigger and I am subtracting it to be equal." << std::endl;
            n--;
        }
    }
    std::cout << "One Day I am Going to say It was hard but I Made it In a Ferrari" << std::endl;
    return 0;
}
