#include <iostream>
#include <vector>
#include <math.h>

#define PI 3.14159265358

using std::cout, std::cin, std::endl;

float drone_x, drone_y = 0;
std::vector<std::array<float, 2>> drone_history = {};

std::string inputs[] = {
    "gerak",
    "lokasi",
    "gerak_2",
    "undo",
    "redo",
    "save",
    "load",
    "quit"
};

float ask_float_input(std::string name) {
    float input;

    cout << name << ": ";
    cin >> input;

    return input;
}

int main() {
    bool running = true;

    while (running) {
        cout << "SIMULASI DRONE\nFungsi yang dapat digunakan:\n";

        int inputs_len = sizeof(inputs)/sizeof(std::string);
        for (int i = 0; i < inputs_len; i++) {
            cout << i+1 << ". " << inputs[i] << endl;
        }

        int input;
        cin >> input;

        if (input < 0 || input > inputs_len) {
            cout << "Bukan input yang benar!" << endl << endl;
            continue;
        }

        cout << endl; //Mempermudah membaca

        switch (input) {
            case 1: { // Gerak
                float x, y;

                x = ask_float_input("x");
                y = ask_float_input("y");

                drone_x += x;
                drone_y += y;
                break;
            }
            case 2: { // lokasi
                cout << "(" << drone_x << ", " << drone_y << ")" << endl;
                system("pause");
                break;
            }
            case 3: { // gerak_2
                float v, t, theta;

                v = ask_float_input("v");
                t = ask_float_input("t");
                theta = ask_float_input("theta");

                float d = v * t;
                drone_x += d * cos(theta * PI / 180);
                drone_y += d * sin(theta * PI / 180);
                break;
            }
            case 8: { // quit
                running = false;
                break;
            }
        }

        cout << endl; //Mempermudah membaca
    }

    cout << "Terima kasih!";
}