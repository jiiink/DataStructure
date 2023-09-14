#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int numOfPoints;
vector< pair<int, int> > points;
int times[5];
vector<int> distances;
vector<float> each_distances;


void output(int x, int y) {
    cout << x << " " << y << endl;
}

void get_distances() {
    points.push_back(points[0]);
    distances.push_back(0);
    int distance_from_start = 0;
    int each_distance = 0;


    for (int i=0; i<points.size()-1; i++) {
        float each = (abs(points[i].first - points[i+1].first) + abs(points[i].second - points[i+1].second));
        each_distances.push_back(each);
        each_distance += each;
        distances.push_back(each_distance);
    }
}


void run_robo(int time) {
    vector<pair<int, int> > directions;
    int time_minus_distance = 0;
    int i;
    for (i=0; i<distances.size(); i++) {
        if (time <= distances[i]) {
            time_minus_distance = time - distances[i-1];
            break;
        }
    }
    directions.emplace_back(points[i-1].first + time_minus_distance, points[i-1].second); // + x
    directions.emplace_back(points[i-1].first - time_minus_distance, points[i-1].second); // - x
    directions.emplace_back(points[i-1].first, points[i-1].second + time_minus_distance); // + y
    directions.emplace_back(points[i-1].first, points[i-1].second - time_minus_distance); // - y

    for (int j=0; j<4; j++) {
        float dist = hypot(directions[j].first - points[i].first, directions[j].second - points[i].second);
        if (dist <= each_distances[i-1]) {
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
        time %= distances[numOfPoints];
        run_robo(time);
    }

    return 0;
}