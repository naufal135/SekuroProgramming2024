#include "Matrix/Matrix.h"
#include "Swerve/Swerve.h"

float v_x(float t) {
    return 48*cos(t) * sin(t*t);
}

float v_y(float t) {
    return 4*sin(4*t) * 6*sin(3*t) + 10*sin(2*t) - 13*sin(t);
}

int main() {
    Swerve robot(0.26363, 0.26363, 0, 5, 0);

    Matrix v = robot.velocityCommand(v_x(1), v_y(1), 0);
    robot.updatePose(v, 0.01);
    robot.getPose().display();
}