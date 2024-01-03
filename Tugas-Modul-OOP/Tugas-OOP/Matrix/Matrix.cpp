#include "Matrix.h"
#include <initializer_list>
#include <vector>
#include <iostream>

// Constructors
Matrix::Matrix(std::initializer_list<std::vector<float>> arrays) {;
    this->width = arrays.size();

    std::vector<std::vector<float>> members;
    members.insert(members.end(), arrays.begin(), arrays.end());
    this->members = members;
};

// Methods
void Matrix::display() {
    for (std::vector<float> v: this->members) {
        for (float n: v) {
            std::cout << n;
        }
    }
}