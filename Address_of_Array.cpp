#include <iostream>

int main(){
    int List[10] = {1,10,2,9,3,8,4,7,5,6};
    int demand;
    std::cout << "Find the address  from numbers 1 to 10 : ";
    std::cin >> demand;
    
    for(int i=0; i<10; i++){
        if(List[i] == demand){
            int *address = &List[i];
            std::cout << "The Address is : " <<  static_cast<void*>(address) << std::endl;
        }
    }
}
