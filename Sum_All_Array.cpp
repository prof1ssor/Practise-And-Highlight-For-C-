#include <iostream>

int main(){
    int numbers = 10;
    int list[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    
    for(int i = 0; i < numbers; i++){
        sum = sum+list[i];
    }
    std::cout << "The sum of the list is : " << sum << std::endl;
    
    return 0;
}
