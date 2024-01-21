#include <iostream>

int main(){
    int SIZE = 5;
    int arr[5] = {1,2,3,4,5};
    
    for(int i=0; i<SIZE; i++){
        std::cout << arr[i] << std::endl; // Here i is counting numbers from 0-5 hence we will get the address of each.
    }
    std::cout << arr << std::endl; //This will print the address because here we are demanding the address of the array
    std::cout << arr[4] << std::endl; //In this we are putting the number of position in the array itself so we get 5.
}
