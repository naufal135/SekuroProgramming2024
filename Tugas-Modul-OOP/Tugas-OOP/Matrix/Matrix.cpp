#include "Matrix.h"
#include <initializer_list>
#include <vector>
#include <iostream>

const std::vector<std::vector<float>> ZERO_VECTOR = {{0}};
const Matrix ZERO_MATRIX = ZERO_VECTOR;

// Constructors
Matrix::Matrix(std::initializer_list<std::vector<float>> arrays) {
    std::vector<std::vector<float>> rows;
    rows.insert(rows.end(), arrays.begin(), arrays.end());
    this->data = rows;

    // Check length of rows
    size_t l = rows[0].size();
    for (std::vector<float> v: this->data) {
        if (v.size() != l) {
            std::cout << "Matrix row size is variable!" << std::endl;
            this->data = ZERO_VECTOR;
            l = 0;
            break;
        }
    }

    // Set size
    this->x = l;
    this->y = this->data.size();
};

Matrix::Matrix(std::vector<std::vector<float>> new_mat) {
    this->data = new_mat;

    // Check length of rows
    size_t l = this->data[0].size();
    for (std::vector<float> v: this->data) {
        if (v.size() != l) {
            std::cout << "Matrix row size is variable!" << std::endl;
            this->data = ZERO_VECTOR;
            l = 0;
            break;
        }
    }

    // Set size
    this->x = l;
    this->y = this->data.size();
}

Matrix::Matrix(size_t x, size_t y) {
    std::vector<std::vector<float>> rows;
    for (int i = 0; i < y; i++) {
        std::vector<float> row_n;
        row_n.insert(row_n.end(), x, 0);
        rows.push_back(row_n);
    }

    this->data = rows;
    this->x = x;
    this->y = y;
}

// Methods
void Matrix::display() {
    for (std::vector<float> v: this->data) {
        for (float n: v) {
            std::cout << n << ", ";
        }
        std::cout << std::endl;
    }
}

// Operators
Matrix Matrix::operator+(Matrix b) {
    if (this->x != b.x || this->y != b.y) {
        std::cout << "The matrix dimension is not valid!" << std::endl;
        return ZERO_MATRIX;
    }

    std::vector<std::vector<float>> result;
    for (size_t i_y = 0; i_y < this->y; ++i_y) {
        std::vector<float> row;
        for (size_t i_x = 0; i_x < this->x; ++i_x) {
            row.push_back(this->data[i_y][i_x] + b.data[i_y][i_x]);
        }
        result.push_back(row);
    }

    return Matrix(result);
}

Matrix Matrix::operator-(Matrix b) {
    if (this->x != b.x || this->y != b.y) {
        std::cout << "The matrix dimension is not valid!" << std::endl;
        return ZERO_MATRIX;
    }

    std::vector<std::vector<float>> result;
    for (size_t i_y = 0; i_y < this->y; ++i_y) {
        std::vector<float> row;
        for (size_t i_x = 0; i_x < this->x; ++i_x) {
            row.push_back(this->data[i_y][i_x] - b.data[i_y][i_x]);
        }
        result.push_back(row);
    }

    return Matrix(result);
}

Matrix Matrix::operator*(Matrix b) {
    if (this->x != b.y) {
        std::cout << "Multiplication cannot be done. The number of columns in the first matrix should be equal to the number of rows in the second" << std::endl;
        return ZERO_MATRIX;
    }

    std::vector<std::vector<float>> result;
    for (size_t i = 0; i < this->y; ++i) {
        std::vector<float> row;
        for (size_t j = 0; j < b.x; ++j) {
            float r = 0;
            for (size_t k = 0; k < b.y; ++k) {
                r += this->data[i][k] * b.data[k][j];
            }
            row.push_back(r);
        }
        result.push_back(row);
    }

    return Matrix(result);
}