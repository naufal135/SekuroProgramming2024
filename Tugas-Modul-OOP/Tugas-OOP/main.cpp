#include "Matrix/Matrix.h"

int main() {
    Matrix M = {{1, 2}, {3, 4}};
    M.display();

    Matrix M2(5, 5);
    M2.display();
}