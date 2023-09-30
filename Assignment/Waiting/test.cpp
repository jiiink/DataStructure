#include <bits/stdc++.h>
using namespace std;


// vector< vector<int> >;

vector< vector<int> > room = {
    {15, 27, 30},
    {34},
    {42},
    {45, 51},
    {56, 62, 69},
    {72},
    {80, 89, 98},
    {112},
    {125}
};
vector< vector<int> > empty_vector;
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
        // cout << "input : " << mov << seat << endl;
    }
}

bool mysort(vector<int> a, vector<int> b) {
    return a[0] < b[0];
}

void split(vector<int>& seats) {
    cout << "split\n";
    // after split, 
    // sort(room.begin, room.end, mysort)

    size_t mid_point = seats.size() / 2;
    // cout << mid_point << endl;
    vector<int> left(seats.begin(), seats.begin()+mid_point);
    vector<int> right(seats.begin()+mid_point, seats.end());

    seats.clear();
    // seats.shrink_to_fit();
    // room.shrink_to_fit();

    int index = 0;
    for (auto& seats : room) {
        if (seats.empty()) {
            room.erase(room.begin() + index);
            break;
        }
        index++;
    }
    // seats.insert(seats.end(), left.begin(), left().end());
    room.push_back(left);
    room.push_back(right);
    sort(room.begin(), room.end(), mysort);
}

void adding(int value) {
    cout << "adding " << value << endl;
    // for (auto& seats : room) {
    //     // for (auto& seat : seats) {
    //     //     if (value > seat) {
    //     //         seats.push_back(value);
    //     //     }
    //     //     if (value < seat) {
    //     //         seats.insert(value);
    //     //     }
    //     // }
    //     for (auto position = seats.begin(); position != seats.end(); position++) {
    //         if (value > *position) {
    //             seats.push_back(value);
    //         }
    //         if (value < *position) {
    //             seats.insert(position, value);
    //         }
    //     }

    //     if (seats.size() == 2*k) {
    //         split();
    //     }
    // }

    for (auto position = room.rbegin(); position != room.rend(); position++) {
        if (position == room.rend() - 1) {
            // cout << "first if\n";
            (*position).push_back(value);
            sort((*position).begin(), (*position).end());
            // break;
            if ((*position).size() == 2*k) {
                split(*position);
                break;
            }
            break;
        }
        else if (value > (*position)[0]) {
            // cout << "second if\n";
            (*position).push_back(value);
            sort((*position).begin(), (*position).end());
            // break;
            if ((*position).size() == 2*k) {
                split(*position);
                break;
            }
            break;
        }
        // if ((*position).size() == 2*k) {
        //     split();
        //     break;
        // }
    }
}

void removing(int value) {
    // int value = v * -1;
    cout << "removing " << value << endl;
    int room_index = 0;
    for (auto& seats : room) {
        int index = 0;
        for (auto seat : seats) {
            if (value == seat) {
                seats.erase(seats.begin() + index);
                // seats.shrink_to_fit();
                if (seats.empty()) {
                // room.remove(seats);
                    room.erase(room.begin() + room_index);
                    return;
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
    if (room.empty()) {
        // seats.push_back(0);
        room.push_back(seats);
    }
    for (auto& moving : movings) {
        // cout << moving << endl;
        if (moving > 0) adding(moving);
        else            removing(abs(moving));
        output();
    }
    
}




int main() {
    input();
    // cout << room.size() << endl;
    process();
    output();
    return 0;
}