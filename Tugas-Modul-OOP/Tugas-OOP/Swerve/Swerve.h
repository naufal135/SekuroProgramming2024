#ifndef SWERVE_H
#define SWERVE_H

#include "../Matrix/Matrix.h"
#include <vector>

class Swerve {
    private:
        Matrix* drive_mat;
        Matrix* pose;
    public:
        // Constructor
        Swerve(float r_nx, float r_ny, float x0, float y0, float omega0);

        // Methods
        Matrix velocityCommand(float v_x, float v_y, float omega);
        void updatePose(Matrix v, float dt);
        Matrix getPose();
};

#endif