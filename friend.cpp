#include <iostream>

class owner{
    private:
    int hello(){
        std::cout << "Hello i am private." << std::endl;
    }
    protected:
    int hell(){
        std::cout << "Hello i am protected." << std::endl;
    }
    public:
    int hel(){
        std::cout << "Hello i am private." << std::endl;
    }
    friend int fun();
};
int fun(){
    owner o;
    o.hello();
    o.hell();
    o.hel();
}

int main(){
    fun();
}
