#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <array>
#include <initializer_list>

class Matrix {
    private:
        size_t x;
        size_t y;
        std::vector<std::vector<float>> rows;
    public:
        // Constructor
        Matrix(std::initializer_list<std::vector<float>>);
        Matrix(size_t x, size_t y);

        // Methods
        void display();

        // Operators
        Matrix operator+(Matrix b);
        Matrix operator-(Matrix b);
        Matrix operator*(Matrix b);
};

#endif