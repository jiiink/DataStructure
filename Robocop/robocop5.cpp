#include <iostream>
#include <vector>
using namespace std;

int numOfPoints;
vector< pair<int, int> > points;
int times[5];



void output(int x, int y) {
    cout << x << " " << y << endl;
}

void get_distances(int* distances) {
    points.push_back(points[0]);
    distances[0] = 0;
    int distance_from_start = 0;
    vector<int> each_distances;

    for (int i=0; i<points.size()-1; i++) {
        each_distances.push_back(abs(points[i].first - points[i+1].first) + abs(points[i].second - points[i+1].second));
    }

    int i = 1;
    for (auto& each : each_distances) {
        distance_from_start += each;
        distances[i++] = distance_from_start;
    }
}


void run_robo(int* distances, int time) {
    int index;
    int max_stop = -1;
    for (int i=0; i<points.size(); i++) {
        if (distances[i] < time && distances[i] > max_stop) {
            max_stop = distances[i];
            index = i;
        }
    }
    int before_x = points[index].first;
    int before_y = points[index].second;
    int after_x = points[index+1].first;
    int after_y = points[index+1].second; 
    
    int time_minus_distant = time - distances[index];
    if (before_x == after_x) { // same x
        if (before_y < after_y) {
            output(before_x, before_y + time_minus_distant);
        } else {
            output(before_x, before_y - time_minus_distant);
        }
    } else if (before_y == after_y) { // same y
        if (before_x < after_x) {
            output(before_x + time_minus_distant, before_y);
        } else {
            output(before_x - time_minus_distant, before_y);
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
    int distances[numOfPoints+1];
    
    get_distances(distances);

    for (auto& time : times) {
        time %= distances[numOfPoints];
        run_robo(distances, time);
    }


    return 0;
}