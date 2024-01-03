#include "Matrix/Matrix.h"
#include "Swerve/Swerve.h"
#include "pbPlots/pbPlots.hpp"
#include "pbPlots/supportLib.hpp"

float v_x(float t) {
    return 48*cos(t) * pow(sin(t), 2);
}

float v_y(float t) {
    return 4*sin(4*t) + 6*sin(3*t) + 10*sin(2*t) - 13*sin(t);
}

int main() {
    // Plotting
    StringReference *errorMessage = CreateStringReferenceLengthValue(0, L' ');
    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();

    // std::vector<double> xs {-2, -1, 0, 1, 2};
    // std::vector<double> ys {2, 1, 0, -1, -2};

    // Simulasi
    Swerve robot(0.26363, 0.26363, 0, 5, 0);
    const float t_f = 6.3;
    const float dt = 0.01;

    // Inisialisasi data untuk diplot
    std::vector<std::vector<double>> pos;
    std::vector<double> v1;
    std::vector<double> v2;
    std::vector<double> v3;
    std::vector<double> v4;

    // Vector dt untuk plotting
    std::vector<double> dt_vec;

    for (float t = 0; t < t_f; t += dt) {
        Matrix v = robot.velocityCommand(v_x(t), v_y(t), 0);
        robot.updatePose(v_x(t), v_y(t), 0, dt);

        Matrix pose = robot.getPose();
        pos.push_back({pose[0, 0], pose[1, 0]});
        v1.push_back({sqrtf(pow(v[0, 0], 2) + pow(v[1, 0], 2))});
        v2.push_back({sqrtf(pow(v[2, 0], 2) + pow(v[3, 0], 2))});
        v3.push_back({sqrtf(pow(v[4, 0], 2) + pow(v[5, 0], 2))});
        v4.push_back({sqrtf(pow(v[6, 0], 2) + pow(v[7, 0], 2))});
        dt_vec.push_back(t);
    }

    // Pos vector
    std::vector<double> p_xs;
    std::vector<double> p_ys;
    for (auto p: pos) {
        p_xs.push_back(p[0]);
        p_ys.push_back(p[1]);
    }

    // Gambar plot
    // Seharusnya dimasukkan dalam function karena duplikasi
    DrawScatterPlot(imageRef, 600, 400, &p_xs, &p_ys, errorMessage);
    std::vector<double> *pngData_p = ConvertToPNG(imageRef->image);
    WriteToFile(pngData_p, "plot_p.png");
    DeleteImage(imageRef->image);

    DrawScatterPlot(imageRef, 600, 400, &dt_vec, &v1, errorMessage);
    std::vector<double> *pngData_v1 = ConvertToPNG(imageRef->image);
    WriteToFile(pngData_v1, "plot_v1.png");
    DeleteImage(imageRef->image);

    DrawScatterPlot(imageRef, 600, 400, &dt_vec, &v2, errorMessage);
    std::vector<double> *pngData_v2 = ConvertToPNG(imageRef->image);
    WriteToFile(pngData_v2, "plot_v2.png");
    DeleteImage(imageRef->image);

    DrawScatterPlot(imageRef, 600, 400, &dt_vec, &v3, errorMessage);
    std::vector<double> *pngData_v3 = ConvertToPNG(imageRef->image);
    WriteToFile(pngData_v3, "plot_v3.png");
    DeleteImage(imageRef->image);

    DrawScatterPlot(imageRef, 600, 400, &dt_vec, &v4, errorMessage);
    std::vector<double> *pngData_v4 = ConvertToPNG(imageRef->image);
    WriteToFile(pngData_v4, "plot_v4.png");
    DeleteImage(imageRef->image);

    FreeAllocations();
}