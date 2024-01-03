#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <array>
#include <initializer_list>

class Matrix {
    private:
        int width;
        std::vector<std::vector<float>> members;
    public:
        // Constructor
        Matrix(std::initializer_list<std::vector<float>>);
        Matrix(int x, int y);

        // Methods
        void display();

        // Operators
        Matrix operator+(Matrix b);
        Matrix operator-(Matrix b);
        Matrix operator*(Matrix b);
};

#endif