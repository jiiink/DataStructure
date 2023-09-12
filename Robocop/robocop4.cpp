#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


void get_distances(vector<int>& distances, vector<pair<int, int> >& points) {
    points.push_back(points[0]);
    distances.push_back(0);
    int distance_from_start = 0;
    vector<int> each_distances;

    for (int i=0; i<points.size()-1; i++) {
        each_distances.push_back(hypot(points[i].first - points[i+1].first, points[i].second - points[i+1].second));
    }

    for (auto& each : each_distances) {
        distance_from_start += each;
        distances.push_back(distance_from_start);
    }
}


void run_robo(vector< pair<int, int> >& points, int time, vector<int>& distances) {
    int index;
    pair<int, int> robo;
    int max_stop = -1;
    for (int i=0; i<distances.size(); i++) {
        if (distances[i] < time && distances[i] > max_stop) {
            max_stop = distances[i];
            index = i;
        }
    }
    int time_minus_distant = time - distances[index];
    if (points[index].first == points[index+1].first) { // same x
        if (points[index].second < points[index+1].second) {
            robo = make_pair(points[index].first, points[index].second + time_minus_distant);
        } else {
            robo = make_pair(points[index].first, points[index].second - time_minus_distant);
        }
    } else if (points[index].second == points[index+1].second) { // same y
        if (points[index].first < points[index+1].first) {
            robo = make_pair(points[index].first + time_minus_distant, points[index].second);
        } else {
            robo = make_pair(points[index].first - time_minus_distant, points[index].second);
        }
    }


    cout << robo.first << " " << robo.second << endl;
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
    vector<int> distances;
    int times[5];
    input(numOfPoints, points, times);
    
    get_distances(distances, points);

    for (auto& time : times) {
        time %= distances.back();
        run_robo(points, time, distances);
    }


    return 0;
}