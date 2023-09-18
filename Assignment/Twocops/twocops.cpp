#include <iostream>
#include <vector>
using namespace std;


int numOfPoints = 0;
int t = 0;
vector<pair<int, int> > points;
int crash_count = 0;
int c1_index = 0;
int c2_index = 0;
pair<int, int> c1, c2;


void output() {
    if (crash_count % 2) { // when crash_count is odd. change the coordinates of robots
        cout << points[c2_index].first << " " << points[c2_index].second << endl;
        cout << points[c1_index].first << " " << points[c1_index].second << endl;
    } else {
        cout << points[c1_index].first << " " << points[c1_index].second << endl;
        cout << points[c2_index].first << " " << points[c2_index].second << endl;
    }
}



void run_robo() {
    t %= points.size();

    for (int i=0; i<t; i++) {
        c1_index++;
        c2_index--;

        if (c2_index < 0) {
            c2_index = points.size() - 1;
        }

        c1 = points[c1_index];
        c2 = points[c2_index];

        if (c1 == c2 || points[c1_index - 1] == c2) { // when two robots crash
            crash_count++;
        }
    }
    output();
}

void make_route() {
    points.push_back(points[0]);
    int k = 0;
    int j = 0;
    for (int i=0; i<numOfPoints+1; i++) {
        int m = 0;
        pair<int, int> before = points[k];
        pair<int, int> after = points[k+1];
        
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
}

void generate_point(int x, int y) {
    points.emplace_back(x, y);
}

void input() {
    cin >> numOfPoints;
    
    string line;
    for (int i=0; i<numOfPoints; i++) {
        int x, y;
        cin >> x >> y;
        generate_point(x, y);
    }

    cin >> t;
}


int main() {
    input();

    c2 = points[numOfPoints / 2 - 1];
    make_route();
    for (int i=0; i<points.size(); i++) {
        if (c2 == points[i]) {
            c2_index = i;
            break;
        }
    }

    run_robo();

    return 0;
}