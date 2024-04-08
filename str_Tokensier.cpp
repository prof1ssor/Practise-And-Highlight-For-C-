//Mostly strtok is used this whay only whith the while.

#include <iostream>
#include <string.h>

int main(){
    char hello[] = "A = 1;B = 2;C = 3";
    char *token = strtok(hello, ";");

    while(token != NULL) {
        std::cout << token << std::endl;
        token = strtok(NULL, ";");
    }
}
