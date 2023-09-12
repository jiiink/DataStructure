#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

void make_route(int& numOfPoints, vector< pair<int, int> >& points) {
    points.push_back(points[0]);
    int k = 0;
    int j = 0;
    for (int i=0; i<numOfPoints+1; i++) {
        int m = 0;
        int before_x = points[k].first;
        int before_y = points[k].second;
        int after_x = points[k+1].first;
        int after_y = points[k+1].second;
        
        if (before_x == after_x) {
            j = k;
            if (before_y < after_y) {
                while (before_y++ != after_y-1) {
                    // before_y++;
   
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            } else {
                while (before_y-- != after_y+1) {
                    // before_y--;
                
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            }
        } else if (before_y == after_y) {
            j = k;
            if (before_x < after_x) {
                while (before_x++ != after_x-1) {
                    // before_x++;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            } else {
                while (before_x-- != after_x+1) {
                    // before_x--;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
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