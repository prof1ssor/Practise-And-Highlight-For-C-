#include <iostream>

class zero{
    public:
    virtual int drive()=0;
};

class one : public zero{
    public:
    int drive(){
        std::cout << "This is the output from the first server." << std::endl;
        return 0;
    }
};

class two : public zero{
    public:
    int drive(){
        std::cout << "This is the output from the second server." << std::endl;
        return 0;
    }
};

int main(){
    zero *z = new one();
    z -> drive();
    z = new two();
    z -> drive();
}
