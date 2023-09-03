#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Point {
public:
    int x, y;
    int position = 0;
    Point() {}
    Point(int x, int y) : x(x), y(y) {}
};

int main() {
    fstream myfile;
    myfile.open("test2.txt", ios::in);

    string line;
    vector<int> numbers;
    getline(myfile, line);
    // cout << line << endl;
    int number;
    istringstream iss(line);

    while (iss >> number) {
        // istringstream iss(line);
        // iss >> number;
        if (number) {
            numbers.push_back(number);
        }
        
        // number++;
        // cout << number << endl;
    }

    vector<Point> points;

    while (getline(myfile, line)) {
        istringstream iss(line);
        int x, y;

        iss >> x;
        iss >> y;

        Point point(x, y);
        points.push_back(point);
    }

    // for (auto& point : points) {
    //     cout << point.x << " " << point.y << endl;
    // }

    int numOfBox = numbers.size() % 2;
    int boxes[numOfBox];

    vector<int> hLines;
    vector<int> vLines;
    int i = 1;
    for (auto& number : numbers) {
        if (i % 2 == 1) {
            hLines.push_back(number);
        } else {
            vLines.push_back(number);
        }
        i++;
    }

    for (auto& point : points) {
        int status = 1;
        int length = 0;
        for (auto& hLine : hLines) {
            length += hLine;
            if (point.x <= length) {
                point.position = status;
                break;
            }
            status++;
        }
    }

    string result;
    for (auto& point : points) {
        switch (point.position) {
            case 1:
                if (point.x < hLines[0] && point.y < vLines[0] + vLines[1] + vLines[2]) {
                    result = "in";
                } else if (point.x <= hLines[0] && (vLines[1]+vLines[2] <= point.y) &&(point.y<= vLines[0]+vLines[1]+vLines[2])) {
                    result = "on";
                } else if (vLines[0]+vLines[1]+vLines[2] < point.y) {
                    result = "out";
                }
                cout << result << endl;
                break;
            case 2:
                if ((hLines[0] < point.x)&&(point.x < hLines[0]+hLines[1]) && point.y < vLines[1]+vLines[2]) {
                    result = "in";
                } else if ((hLines[0] <= point.x)&& (point.x <= hLines[0]+hLines[1]) && (vLines[2] <= point.y)&&(point.y <= vLines[1]+vLines[2])) {
                    result = "on";
                } else if (vLines[1]+vLines[2] < point.y) {
                    result = "out";
                }
                cout << result << endl;
                break;
            case 3:
                if ((hLines[0]+hLines[1] < point.x)&& (point.x < hLines[0]+hLines[1]+hLines[2]) && point.y < vLines[2]) {
                    result = "in";
                } else if ((hLines[0]+hLines[1] <= point.x) && (point.x <= hLines[0]+hLines[1]+hLines[2]) && point.y <= vLines[2]) {
                    result = "on";
                } else if (vLines[2] < point.y) {
                    result = "out";
                }
                cout << result << endl;
                break;
            // default;
        }
    }

    
    // for (auto& point : points) {
    //     if (point.x < hLines[0] && point.y < vLines[0] + vLines[1] + vLines[2]) {
    //         result = "in";
    //     } else if (point.x <= hLines[0] && vLines[1]+vLines[2] <= point.y <= vLines[0]+vLines[1]+vLines[2]) {
    //         result = "on";
    //     } else if (vLines[0]+vLines[1]+vLines[2] < point.y) {
    //         result = "out";
    //     }
    // }
    
    // cout << numbers[0] << endl;
    // cout << number << endl;
    // cout << numbers[0] << endl;

    // for (auto& number : numbers) {
    //     cout << number << " " ;
    // }
    // cout << endl;

    myfile.close();

    return 0;
}