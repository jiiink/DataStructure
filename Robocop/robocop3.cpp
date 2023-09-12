#include <iostream>
// #include <sstream>
#include <algorithm>
#include <vector>
using namespace std;


int numOfPoints;

vector< pair<int, int> > points;

int times[5];



// make route between points
void make_route() {
    points.push_back(points[0]);
    int k = 0;
    int j = 0;
    // // cout << points.size() << endl;
    for (int i=0; i<points.size()-1; i++) {
        int m = 0;
        pair<int, int> before = points[k];
        pair<int, int> after = points[k+1];
        // int before_x = before.first;
        // int before_y = before.second;
        // int after_x = after.first;
        // int after_y = after.second;
        
        if (before.first == after.first) { // same x
            j = k;
            if (before.second < after.second) {
                while (before.second++ != after.second-1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            } else {
                while (before.second-- != after.second+1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            }
        } else if (before.second == after.second) {// same y
            j = k;
            if (before.first < after.first) {
                while (before.first++ != after.first-1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            } else {
                while (before.first-- != after.first+1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            }
        }
        k += (m+1);
    }
    points.pop_back();

    cout << "point : " << points.size() << endl;
    for (auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }
    // for (int i=0; i<points.size(); i++) {
    //     cout << points[i].first << " " << points[i].second << endl;
    // }
}

void run_robo() {
    int index;
    for (int i=0; i<5; i++) {
        index = times[i] % points.size();
        cout << points[index].first << " " << points[index].second << endl;
    }
}

void generate_point(int x, int y) {
    points.push_back(make_pair(x, y));
}

void input() {
    cin >> numOfPoints;
    for (int i=0; i<numOfPoints; i++) {
        int x, y;
        cin >> x >> y;
        generate_point(x, y);
    }
    for (int i=0; i<5; i++) {
        cin >> times[i];
    }
}



int main() {
    // points.push_back(make_pair(1, 2));
    // cout << points[0].first << " " << points[0].second << endl;
    input();
    make_route();
    // run_robo();
    // for (auto& point : points) {
    //     cout << point.first << " " << point.second << endl;
    // }

    return 0;
}