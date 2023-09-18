#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;


static int numOfPoints;

static vector< pair<int, int> > points;

static int times[5];


// make route between points
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
    // cin >> times[0] >> times[1] >> times[2] >> times[3] >> times[4];
}



int main() {
    input();
    make_route();
    run_robo();

    return 0;
}