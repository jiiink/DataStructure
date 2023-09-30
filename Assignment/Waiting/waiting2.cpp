#include <bits/stdc++.h>
using namespace std;


vector< vector<int> > room(1);
vector<int> seats;
vector<int> movings;
int n, k;


void input() {
    string mov;
    int seat;
    cin >> n >> k;
    while (n--) {
        cin >> mov >> seat;
        if (mov == "-") seat *= -1;
        movings.push_back(seat);
    }
}

bool mysort(vector<int> a, vector<int> b) {
    return a[0] < b[0];
}

void split(vector<int>& seats) {
    size_t mid_point = seats.size() / 2;
    vector<int> left(seats.begin(), seats.begin()+mid_point);
    vector<int> right(seats.begin()+mid_point, seats.end());

    seats.clear();

    int index = 0;
    for (auto& seats : room) {
        if (seats.empty()) {
            room.erase(room.begin() + index);
        }
        index++;
    }

    room.push_back(left);
    room.push_back(right);
    sort(room.begin(), room.end(), mysort);
}

void adding(int value) {
    cout << "adding " << value << endl;

    int index = room.size() - 1;
    while (index >= 0) {
        if (index == 0) {
            room[index].push_back(value);
            sort(room[index].begin(), room[index].end());
            break;
        } else if (value > room[index].front()) {
            room[index].push_back(value);
            sort(room[index].begin(), room[index].end());
            break;
        }
        index--;
    }
    if (room[index].size() == 2*k) {
        split(room[index]);
    }
}

void removing(int value) {
    cout << "removing " << value << endl;


    int room_index = 0;
    for (auto& seats : room) {
        int index = 0;
        for (auto seat : seats) {
            if (value == seat) {
                seats.erase(seats.begin() + index);

                if (seats.empty()) {
                    room.erase(room.begin() + room_index);
                }
                return;
            }
            index++;
        }
        room_index++;
    }
}
void output() {
    cout << "-------------\n";
    for (auto& seats : room) {
        for (auto& seat : seats) {
            cout << seat << " ";
        }
        cout << endl;
    }
    cout << "-----------\n";
}


void process() {
    for (auto& moving : movings) {
        if (moving > 0) adding(moving);
        else            removing(abs(moving));
        // output();
    }
}




int main() {
    input();
    process();
    output();
    return 0;
}