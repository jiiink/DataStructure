#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

void run_robo(vector< pair<int, int> >& points) {
    pair<int, int> start_point;
    start_point = points[0];
    
    pair<int, int> robo_point;
    for (int i=0; i<20; i++) {
        
    }
}

void generate_point(vector< pair<int, int> >& points, int x, int y) {
    // vector< pair<int, int> > points;
    // pair<int, int> point;

    // point = make_pair(x, y);
    points.push_back(make_pair(x, y));
    // cout << "Generate" << endl;
    // cout << point.first << " " << point.second << endl;
    // run_robo(points);
}

void input(vector< pair<int, int> >& points) {
    fstream myfile;
    myfile.open("test.txt", ios::in);
    if (myfile.is_open()) {
        string line;
        getline(myfile, line);
        istringstream iss(line);
        int numOfPoints;
        iss >> numOfPoints;
        // cout << numOfPoints << endl;
        for (int i=0; i<numOfPoints; i++) {
            getline(myfile, line);
            istringstream iss(line);
            int x, y;

            iss >> x >> y;
            // cout << x << " " << y << endl;
            generate_point(points, x, y);
        }
        getline(myfile, line);
        istringstream is(line);
        for (int i=0; i<5; i++) {
            int t;
            is >> t;
            // cout << t << endl; 
        }

    }
    myfile.close();
}



void output() {

}

int main() {
    vector< pair<int, int> > points;
    input(points);
    // generate_point(); // In input()
    run_robo(points);       
    output();

    return 0;
}