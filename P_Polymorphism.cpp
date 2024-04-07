#include <iostream>

class leader{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class rectangle : public leader{
    private:
    float length, breath;
    
    public:
    rectangle(float l=0, float b=0){length = l,breath = b;}
    float area(){
        return length * breath;
    }
    float perimeter(){
        return 2*(length+breath);
    }
};

class square : public leader{
    private:
    float side;

    public:
    square(float s=0){side = s;}
    float area(){
        return side*side;
    }
    float perimeter(){
        return 4*side;
    }
};

int main(){
    leader *l = new rectangle(10,12);
    std::cout << "The area of the rectangle is " << l -> area() << " and the perimeter is " << l -> perimeter() << std::endl;

    l = new square(10);
    std::cout << "The area of the square is " << l -> area() << " and the perimeter is " << l -> perimeter() << std::endl;

    return 0;
}
