#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string line;
    int number;
    vector<int> numbers;

    getline(cin, line);
    istringstream iss(line);
    while (iss >> number) {
        if (number) { //store the integers in the first line except 0
            numbers.push_back(number);
        }
    }

    vector< pair<int, int> > corners; //corner is the edge of the stiars
    for (int i=0; i<numbers.size(); i+=2) { //get each corners coordinate
        int x = 0;
        int y = 0;
        for (int j=0; j<=i; j+=2) {
            x += numbers[j];
        }
        for (int k=numbers.size(); k>i; k-=2) {
            y += numbers[k-1];
        }
        corners.push_back(make_pair(x, y));
    }

    vector< pair<int, int> > points; //query point
    while (!cin.eof()) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        int x, y;
        istringstream iss(line);
        iss >> x >> y;

        points.push_back(make_pair(x, y));
    }

    for (auto& point : points) { //find the location of the query points with each corners
        for (int i=0; i<corners.size(); i++) {
            if (point.first > corners.back().first) { //when point's x is over the stair
                cout << "out" << endl;
                break;
            }
            if (point.first == corners[i].first) { 
                if (point.second <= corners[i].second && point.second >= corners[i+1].second) {//when point is on the vertical side of stair
                    cout << "on" << endl;
                    break;
                }
            }
            if (point.first <= corners[i].first) {
                if (point.second < corners[i].second) {
                    cout << "in" << endl;
                    break;
                } else if (point.second > corners[i].second) {
                    cout << "out" << endl;
                    break;
                } else { //when point is on the horizontal side of stair
                    cout << "on" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}