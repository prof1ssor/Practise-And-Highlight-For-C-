#include <iostream>

class one{
    public:
    int drive(){
        std::cout << "This is from the first drive output." << std::endl;
        return 0;
    }
};

class two : public one{
    public:
    int drive(){
        std::cout << "This is the output from the second drive output." << std::endl;
        return 0;
    }
};

int main(){
    two t;
    one *ptr = &t;
    ptr -> drive();
}
