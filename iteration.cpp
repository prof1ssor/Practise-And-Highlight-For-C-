#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {1,2,3,4,5,6,7,8,9};
    
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    
    std::vector<int>::iterator itr;
    
    std::cout << "Using Iteration" << std::endl;
    
    for(itr = v.begin(); itr != v.end(); itr++) {
        std::cout << *itr << std::endl;
    }
    
    std::cout << "Wsing for the each loop" << std::endl;
    
    for(int x:v){
        std::cout << x << std::endl;
    }
    
    return 0;
}
