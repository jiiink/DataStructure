#include <iostream>
// #include <sstream>
#include <algorithm>
#include <vector>
using namespace std;


// make route between points
void make_route(int& numOfPoints, vector< pair<int, int> >& points) {
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

void run_robo(vector< pair<int, int> >& points, int* times) {
    int index;
    for (int i=0; i<5; i++) {
        index = times[i] % points.size();
        cout << points[index].first << " " << points[index].second << endl;
    }
}

void generate_point(vector< pair<int, int> >& points, int x, int y) {
    points.push_back(make_pair(x, y));
}

void input(int& numOfPoints, vector< pair<int, int> >& points, int* times) {
    cin >> numOfPoints;
    for (int i=0; i<numOfPoints; i++) {
        int x, y;
        cin >> x >> y;
        generate_point(points, x, y);
    }
    cin >> times[0] >> times[1] >> times[2] >> times[3] >> times[4];
}



int main() {
    int numOfPoints;
    vector< pair<int, int> > points;
    int times[5];
    input(numOfPoints, points, times);
    make_route(numOfPoints, points);
    run_robo(points, times);

    return 0;
}