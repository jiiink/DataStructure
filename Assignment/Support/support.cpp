#include <bits/stdc++.h>
using namespace std;


struct Guest {
    int arrivedTime, id, councilTime;
    Guest(int at, int id, int ct) : arrivedTime(at), id(id), councilTime(ct) {}
};

// class mycomparison {
//     public:
//         mycomparison() {}
//         bool operator() (const Guest& lhs, const Guest& rhs) {
//             if (lhs.councilTime == rhs.councilTime) 
//                 return lhs.arrivedTime > rhs.arrivedTime;
//             else 
//                 return lhs.councilTime < rhs.councilTime;
//         }
// };
struct mycomparison {
    bool operator() (const Guest& lhs, const Guest& rhs) {
        if (lhs.councilTime == rhs.councilTime) 
            return lhs.arrivedTime > rhs.arrivedTime;
        else
            return lhs.councilTime < rhs.councilTime;
    }
};
priority_queue<Guest, vector<Guest>, mycomparison> Room;
queue<Guest> fromInput;
vector<Guest> outRoom;
int t = 30; // global time


void input() {
    int N, arrivedTime, id, councilTime;
    
    cin >> N;
    while (N--) {
        cin >> arrivedTime >> id >> councilTime;
        Guest guest(arrivedTime, id, councilTime);

        if (guest.arrivedTime <= t)
            Room.push(guest);
        else 
            fromInput.push(guest);
    }
}


void council(Guest& g) {
    int councilTime = 0;
    int minCouncilTime = 10;
    if (g.councilTime > minCouncilTime) {
        councilTime = g.councilTime/2;
        g.councilTime -= councilTime;
        t += councilTime;
        g.arrivedTime = t;
        Room.push(g);
    } else {
        t += g.councilTime;
        outRoom.push_back(g);
    }
}


void process() {
    while (true) {
        while (!Room.empty()) {
            Guest currentGuest = Room.top();
            Room.pop();
            council(currentGuest);

            while (!fromInput.empty()) {
                if (fromInput.front().arrivedTime <= t) {
                    Room.push(fromInput.front());
                    fromInput.pop();
                } else {
                    break;
                }
            }
        }
        if (fromInput.empty()) {
            break;
        } else {
            t = fromInput.front().arrivedTime;
            Room.push(fromInput.front());
            fromInput.pop();
        }
    }
}

void output() {
    for (auto g : outRoom) {
        cout << g.id << endl;
    }
}

int main() {
    input();

    process();

    output();
    
    return 0;
}