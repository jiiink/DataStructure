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
        // cout << each_distance << " ";
    }
    // cout << "distance" << endl;
    // for (auto& distance : distances) {
    //     cout << distance << " ";
    // }
    // cout << endl;
    // cout << "each_distance" << endl;
    // for (auto& distance : each_distances) {
    //     cout << distance << " ";
    // }
    // cout << endl;




    // for (auto& point : points) {
    //     each_distance += abs(point.first - point.first) + abs(point.second - point.second);
    //     distances.push_back(each_distance);
    //     cout << each_distance << " ";
    // }
    // cout << endl;
    

    // int i = 1;
    // for (auto& each : each_distances) {
    //     distance_from_start += each;
    //     distances[i++] = distance_from_start;
    // }
}


void run_robo(int time) {
    // int time %= distances.back();
    // cout << "time : " << time << endl;
    vector<pair<int, int> > directions;
    // pair<int, int> depart_point;
    int time_minus_distance = 0;
    int i;
    for (i=0; i<distances.size(); i++) {
        if (time <= distances[i]) {
            // depart_point = points[i];
            time_minus_distance = time - distances[i-1];
            break;
        }
    }
    directions.push_back(make_pair(points[i-1].first + time_minus_distance, points[i-1].second)); // + x
    directions.push_back(make_pair(points[i-1].first - time_minus_distance, points[i-1].second)); // - x
    directions.push_back(make_pair(points[i-1].first, points[i-1].second + time_minus_distance)); // + y
    directions.push_back(make_pair(points[i-1].first, points[i-1].second - time_minus_distance)); // - y

    // cout << "directions" << endl;
    // for (auto& direction : directions) {
    //     cout << direction.first << " " << direction.second << endl;
    // }
    // int min = INT_MAX;
    // for (auto& direction : directions) {
    //     int dist = hypot(points[i+1].first - direction.first, points[i+1].second - direction.second);
    //     if (dist < min) {
    //         min = dist;
    //     }
    // }
    // cout << "result" << endl;
    for (int j=0; j<4; j++) {
        float dist = hypot(directions[j].first - points[i].first, directions[j].second - points[i].second);
        if (dist <= each_distances[i-1]) {
            output(directions[j].first, directions[j].second);
        }
    }



    // int index;
    // int max_stop = -1;
    // for (int i=0; i<points.size(); i++) {
    //     if (distances[i] < time && distances[i] > max_stop) {
    //         max_stop = distances[i];
    //         index = i;
    //     }
    // }
    // int before_x = points[index].first;
    // int before_y = points[index].second;
    // int after_x = points[index+1].first;
    // int after_y = points[index+1].second; 
    
    // int time_minus_distant = time - distances[index];
    // if (before_x == after_x) { // same x
    //     if (before_y < after_y) {
    //         output(before_x, before_y + time_minus_distant);
    //     } else {
    //         output(before_x, before_y - time_minus_distant);
    //     }
    // } else if (before_y == after_y) { // same y
    //     if (before_x < after_x) {
    //         output(before_x + time_minus_distant, before_y);
    //     } else {
    //         output(before_x - time_minus_distant, before_y);
    //     }
    // }
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
    // int distances[numOfPoints+1];
    
    get_distances();

    // run_robo();
    for (auto& time : times) {
        time %= distances[numOfPoints];
        run_robo(time);
    }


    return 0;
}