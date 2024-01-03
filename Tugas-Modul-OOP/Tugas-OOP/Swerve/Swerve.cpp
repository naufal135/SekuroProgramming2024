#include "Swerve.h"
#include <iostream>

// Constructor
Swerve::Swerve(float r_nx, float r_ny, float x0, float y0, float omega0) {
    this->drive_mat = new Matrix({
        {1, 0, -r_ny},
        {0, 1, r_nx},
        {1, 0, -r_ny},
        {0, 1, r_nx},
        {1, 0, -r_ny},
        {0, 1, r_nx},
        {1, 0, -r_ny},
        {0, 1, r_nx}
    });
    this->pose = new Matrix({{x0}, {y0}, {omega0}});
}

// Methods
Matrix Swerve::velocityCommand(float v_x, float v_y, float omega) {
    Matrix mult_by = {{v_x}, {v_y}, {omega}};
    Matrix result = *(this->drive_mat) * mult_by;

    return result;
}