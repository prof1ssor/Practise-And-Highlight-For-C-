//static members are used because static members help us to keep the a single declaration and there we can use it and can access it anywhere.

#include <iostream>

class Test{
    public:
    int a;
    static int count;

    int function(){
        int a = 10;
        std::cout << a << std::endl;
        std::cout << count++;
    }
};

int Test::count = 0;

int main(){
    Test t;
    std::cout << t.function();

    return 0;
}
