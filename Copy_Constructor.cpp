#include <iostream>

class recatangle{
    int length, breath;

    public:
    recatangle(int l, int b){
        length = l;
        breath = b;
    }

    recatangle(recatangle &r){
        length = r.length;
        breath = r.breath;
    }
    int getLength() const {
        return length;
    }

    int getBreath() const {
        return breath;
    }

    void area(){
        std::cout << length * breath << std::endl;
    }
};

int main(){
    recatangle r1(10,12);
    recatangle r2(r1);

    r1.area();
    r2.area();
}
