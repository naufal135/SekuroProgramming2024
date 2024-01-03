#include "Matrix.h"
#include <initializer_list>
#include <vector>
#include <iostream>

const std::vector<std::vector<float>> ZERO_MATRIX = {{0}};

// Constructors
Matrix::Matrix(std::initializer_list<std::vector<float>> arrays) {
    std::vector<std::vector<float>> rows;
    rows.insert(rows.end(), arrays.begin(), arrays.end());
    this->rows = rows;

    // Check length of rows
    size_t l = rows[0].size();
    for (std::vector<float> v: this->rows) {
        if (v.size() != l) {
            std::cout << "Matrix row size is variable!" << std::endl;
            this->rows = ZERO_MATRIX;
            l = 0;
            break;
        }
    }

    // Set size
    this->x = l;
    this->y = this->rows.size();
};

Matrix::Matrix(size_t x, size_t y) {
    std::vector<std::vector<float>> rows;
    for (int i = 0; i < y; i++) {
        std::vector<float> row_n;
        row_n.insert(row_n.end(), x, 0);
        rows.push_back(row_n);
    }

    this->rows = rows;
    this->x = x;
    this->y = y;
}

// Methods
void Matrix::display() {
    for (std::vector<float> v: this->rows) {
        for (float n: v) {
            std::cout << n << ", ";
        }
        std::cout << std::endl;
    }
}