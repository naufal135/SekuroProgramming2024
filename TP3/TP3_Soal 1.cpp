#include <iostream>

class LinearLine
{
    private:
        float x1, x2, y1, y2;
    public:
        LinearLine(float x1, float y1, float x2, float y2): x1(x1), y1(y1), x2{x2}, y2(y2) {};

        float gradient() {
            return (y2 - y1)/(x2 - x1);
        }

        float y_intercept() {
            float m = gradient();
            return y1 - m*x1;
        }

        void operator + (float a) {
            x1 += a;
            x2 += a;
        }

        void printEquation() {
            float m = gradient();
            float c = y_intercept();

            std::cout << "y = " << m << "x + " << c << std::endl;
        }

        void printPoints() {
            std::cout << "(x1, x2) = (" << x1 << ", " << x2 << ")" << std::endl;
            std::cout << "(y1, y2) = (" << y1 << ", " << y2 << ")" << std::endl;
        }
        
};

int main() {
    LinearLine line(1.0f, 8.0f, 2.0f, 3.0f);
    int a = 3;

    line.printPoints();

    std::cout << "Sehingga didapatkan" << std::endl;
    std::cout << "Gradient: " << line.gradient() << std::endl;
    std::cout << "y_intercept: " << line.y_intercept() << std::endl;
    line.printEquation();

    line + a;
    std::cout << "Setelah digeser sejauh a, didapatkan persamaan baru: " << std::endl;
    line.printEquation();
}