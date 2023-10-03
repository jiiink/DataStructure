#include <bits/stdc++.h>
using namespace std;


// vector< vector<int> > room = {
//     {15, 27, 30},
//     {34},
//     {42},
//     {45, 51},
//     {56, 62, 69},
//     {72},
//     {80, 89, 98},
//     {112},
//     {125}
// };
vector< vector<int> > room(1);
vector<int> seats;
vector<int> movings; // in and out of waiting
int k;



bool mysort(vector<int> a, vector<int> b) { // sort by first element of vector
    return a.front() < b.front();
}

void split(vector<int>& seats, int index) {
    int mid_point = seats.size() / 2;
    vector<int> left(seats.begin(), seats.begin()+mid_point);
    vector<int> right(seats.begin()+mid_point, seats.end());

    room.erase(room.begin() + index);
 
    room.push_back(left);
    room.push_back(right);
    sort(room.begin(), room.end(), mysort);
}

void add_seat(int index, int value) { // add value to the room[index]
    room[index].push_back(value);
    sort(room[index].begin(), room[index].end());
}

void adding_process(int value) {
    int index = room.size() - 1;
    while (index >= 0) {
        if (index == 0) {
            add_seat(index, value);
            break;
        } else if (value > room[index].front()) {
            add_seat(index, value);
            break;
        }
        index--;
    }

    if (room[index].size() == 2*k) split(room[index], index);
}

void removing_process(int value) {
    int index = 0;
    for (auto& seats : room) {
        if (find(seats.begin(), seats.end(), value) != seats.end()) { // found the value
            auto p = find(seats.begin(), seats.end(), value);
            seats.erase(p);

            if (seats.empty()) room.erase(room.begin() + index);

            break;
        }
        index++;
    }
}



void output() {
    for (auto& seats : room) {
        cout << seats.front() << endl;
    }
}


void process() {
    for (auto& moving : movings) {
        if (moving > 0) adding_process(moving);
        else            removing_process(abs(moving));
    }
}


void input() {
    int n;
    string moving;
    int seat;

    cin >> n >> k;
    while (n--) {
        cin >> moving >> seat;
        if (moving == "-") seat *= -1;
        movings.push_back(seat);
    }
}

int main() {
    input();
    process();
    output();
    return 0;
}