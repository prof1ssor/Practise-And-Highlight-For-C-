#include <iostream>
#include <string>

int main(){
    std::string line = "Hello my name is Jordon Belfort";

    const char* saaver = line.c_str();

    std::cout << "The value of the saver is " << saaver << " and " << line.c_str() << std::endl;

    return 0;
}
