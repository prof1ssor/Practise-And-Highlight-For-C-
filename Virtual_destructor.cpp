#include <iostream>

class base{
    public:
    virtual ~base(){
        std::cout << "Destuctor of base class" << std::endl;
    }
};

class derived : public base{
    public:
    ~derived()
    {
        std::cout << "This is the destructor of Derived class" << std::endl;
    }
};

void fun(){
    base *p = new derived();
    delete p;
};

int main(){
    fun();

    return 0;
}
