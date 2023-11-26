#include <iostream>
#include <vector>

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

int main() {
    while (true) {
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
    }
}