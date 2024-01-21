#include <iostream>

int main(){
    int array[8] = {12,534,756,23,87,23,25,1843};
    size_t SizeArray = sizeof(array) / sizeof(array[0]);
    int max = 0;
    
    for(int i=0; i<SizeArray; i++){
        if(array[i] > max){
            max = array[i]; //Writing array[i] = max makes difference and C++ is senstive in these cases.
        }
    }
    std::cout << "The largest number in the array is : " << max << std::endl;
}
