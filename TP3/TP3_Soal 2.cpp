#include <iostream>

class Shape
{
    private:
        float area;
        float keliling;
    public:
        virtual float calculateArea() { return 0; };
        virtual float calculateKeliling() { return 0; };
};

class Rectangle : public Shape
{
    private:
        float width;
        float length;
    public:
        Rectangle(float width, float length): width(width), length(length) {};
        
        float calculateArea() {
            return width * length;
        }

        float calculateKeliling() {
            return 2*width + 2*length;
        }
};

int main() {
    Rectangle rect(5.0f, 4.0f);
    Shape* shape1 = &rect;

    std::cout << "Area: " << shape1->calculateArea() << std::endl;
    std::cout << "Keliling: " << shape1->calculateKeliling() << std::endl;

    return 0;
}