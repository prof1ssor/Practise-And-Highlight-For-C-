//Static keeps the number save as the previous example was

#include <iostream>

void add(){
    static int x = 0;
    x++;
    std::cout << x;
}

int main(){
    add();
    add();
    add();
    add();
    add();
    add();

    return 0;
}
