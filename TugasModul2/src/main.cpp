#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
#include <string>

#define PI 3.14159265358

using std::cout, std::cin, std::endl;

float drone_x, drone_y = 0;
int hist_pointer = -1;
std::vector<float> drone_history;

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

void push_history() {
    if ((hist_pointer+1) * 2 != drone_history.size()) {
        // Hilangkan history
        drone_history.erase(drone_history.begin()+((hist_pointer+1)*2), drone_history.end());
    }
    drone_history.push_back(drone_x);
    drone_history.push_back(drone_y);

    hist_pointer++;
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
        cout << "Input: ";
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

                push_history();
                break;
            }
            case 2: { // lokasi
                if (hist_pointer < 0) {
                    cout << "(0, 0)\n"; // Pasti (0, 0)
                } else {
                    float x = drone_history[hist_pointer*2];
                    float y = drone_history[hist_pointer*2 + 1];

                    cout << "(" << x << ", " << y << ")\n";
                }

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

                push_history();
                break;
            }
            case 4: { // undo
                if (hist_pointer < 0) {cout << "Tidak bisa undo!\n"; break;}
                hist_pointer--;
                drone_x = drone_history[hist_pointer*2];
                drone_y = drone_history[hist_pointer*2 + 1];
                break;
            }
            case 5: { // redo
                if ((hist_pointer + 1)*2 == drone_history.size()) {cout << "Tidak bisa redo!\n"; break;}
                hist_pointer++;
                drone_x = drone_history[hist_pointer*2];
                drone_y = drone_history[hist_pointer*2 + 1];
                break;
            }
            case 6: { // save
                std::ofstream save_file("save.txt");
                for (float i: drone_history) {
                    save_file << i << ',';
                }
                save_file << hist_pointer;
                save_file.close();
                break;
            }
            case 7: { // save
                std::ifstream save_file("save.txt");
                std::string save_string;

                save_file >> save_string;
                save_file.close();

                int end = save_string.size()-1;
                int last_delimit = end;
                std::vector<float> rev_hist;

                for (int i = end; i > 0; i--) {
                    if (save_string[i] == ',') {
                        if (last_delimit == end) {
                            hist_pointer = stoi(save_string.substr(i+1, last_delimit-i));
                        } else {
                            int num = stoi(save_string.substr(i+1, last_delimit-i));
                            rev_hist.push_back(num);
                        }
                        last_delimit = i;
                    }
                }

                // Final item
                int num = stoi(save_string.substr(0, last_delimit));
                rev_hist.push_back(num);

                drone_history.erase(drone_history.begin(), drone_history.end());
                for (std::vector<float>::reverse_iterator it = rev_hist.rbegin(); it != rev_hist.rend(); ++it) {
                    drone_history.push_back(*it);
                }

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