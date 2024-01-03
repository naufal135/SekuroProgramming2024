#include "Matrix/Matrix.h"

int main() {
    Matrix M = {{1, 2, 3}, {4, 5, 6}};
    M.display();

    Matrix M2 = {{2, 2}, {2, 2}, {2, 2}};
    M2.display();

    Matrix R = M * M2;
    R.display();
}