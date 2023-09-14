#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int numOfPoints;
vector< pair<int, int> > points;
int times[5];
vector<int> distances_from_start;
vector<int> each_distances;


void output(int x, int y) {
    cout << x << " " << y << endl;
}

void get_distances() {
    points.push_back(points[0]);
    distances_from_start.push_back(0);
    int distance_from_start = 0;
    int each_distance = 0;


    for (int i=0; i<points.size()-1; i++) {
        each_distance = (abs(points[i].first - points[i+1].first) + abs(points[i].second - points[i+1].second));
        each_distances.push_back(each_distance);
        distance_from_start += each_distance;
        distances_from_start.push_back(distance_from_start);
    }
}


void run_robo(int time) {
    vector<pair<int, int> > directions;
    int time_minus_distance = 0;
    int i;
    for (i=0; i<distances_from_start.size(); i++) {
        if (time <= distances_from_start[i]) {
            time_minus_distance = time - distances_from_start[i-1];
            break;
        }
    }
    directions.emplace_back(points[i-1].first + time_minus_distance, points[i-1].second); // + x direction
    directions.emplace_back(points[i-1].first - time_minus_distance, points[i-1].second); // - x direction
    directions.emplace_back(points[i-1].first, points[i-1].second + time_minus_distance); // + y direction
    directions.emplace_back(points[i-1].first, points[i-1].second - time_minus_distance); // - y direction

    for (int j=0; j<directions.size(); j++) {
        float distance = hypot(directions[j].first - points[i].first, directions[j].second - points[i].second);
        if (distance <= each_distances[i-1]) { // the correct direction to the next point
            output(directions[j].first, directions[j].second);
        }
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
    input();
    get_distances();
    for (auto& time : times) {
        time %= distances_from_start[numOfPoints];
        run_robo(time);
    }

    return 0;
}