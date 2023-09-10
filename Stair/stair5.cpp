#include <iostream>
#include <vector>
#include <sstream>
#include <utility>
using namespace std;

int main() {
    string line;
    int number;
    vector<int> numbers;
    vector<int> x_coordinates; // Separate vectors for x and y coordinates
    vector<int> y_coordinates;

    getline(cin, line);
    istringstream iss(line);
    int x_sum = 0;
    while (iss >> number) {
        if (number) {
            numbers.push_back(number);
            x_sum += number;
            x_coordinates.push_back(x_sum);
        }
    }

    int y_sum = 0;
    for (int i = numbers.size() - 1; i >= 0; i -= 2) {
        y_sum += numbers[i];
        y_coordinates.push_back(y_sum);
    }

    vector<pair<int, int>> points;
    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        int x, y;
        istringstream iss(line);
        iss >> x >> y;
        points.push_back(make_pair(x, y));
    }

    for (auto& point : points) {
        bool inside = false;
        for (int i = 0; i < x_coordinates.size(); i++) {
            if (point.first == x_coordinates[i]) {
                if (point.second <= y_coordinates[i]) {
                    cout << "on" << endl;
                    inside = true;
                    break;
                }
            } else if (point.first < x_coordinates[i]) {
                if (point.second < y_coordinates[i]) {
                    cout << "in" << endl;
                    inside = true;
                    break;
                } else if (point.second > y_coordinates[i]) {
                    cout << "out" << endl;
                    inside = true;
                    break;
                }
            }
        }
        if (!inside) {
            cout << "out" << endl;
        }
    }

    return 0;
}
