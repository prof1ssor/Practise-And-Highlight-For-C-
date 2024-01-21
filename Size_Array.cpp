#include <iostream>

int main(){
    int array[8] = {12,534,756,23,87,23,25,1843};
    int size = 0;
    size_t SizeArray = sizeof(array) / sizeof(array[0]);
    
    std::cout << "The Size of the arrya is : " << SizeArray << std::endl;
}
;
