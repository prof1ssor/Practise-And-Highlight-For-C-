//This is the function for overriding and is a basic

#include <iostream>

class animal{
    public:
    virtual void makesound(){
        std::cout << "The animal makes sounds" << std::endl;
    }
};

class dog : public animal {
    public:
    void makesound() override {
        std::cout << "BARK BARK !!" << std::endl;
    }
};

class cat : public animal {
    public:
    void makesound() override {
        std::cout << "MEOW MEOW" << std::endl;
    }
};

int main(){
    animal *dog = new dog();
    animal *cat = new cat();

    dog -> makesound();
    cat -> makesound();


    delete dog;
    delete cat;

    return 0;
}
