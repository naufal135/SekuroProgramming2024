#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <array>
#include <initializer_list>

class Matrix {
    private:
        size_t x;
        size_t y;
        std::vector<std::vector<float>> data;
    public:
        // Constructor
        Matrix(std::initializer_list<std::vector<float>>);
        Matrix(std::vector<std::vector<float>>);
        Matrix(size_t x, size_t y);

        // Methods
        void display();

        // Operators
        Matrix operator+(Matrix b);
        Matrix operator-(Matrix b);
        Matrix operator*(Matrix b);
        Matrix operator*(float c);
        float operator[](size_t y, size_t x); // C++23
};

#endif