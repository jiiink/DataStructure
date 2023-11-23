#include <bits/stdc++.h>
using namespace std;


struct Guest {
    int aT, id, cT;
    Guest(int at, int id, int ct) : aT(at), id(id), cT(ct) {}
};

class mycomparison {
    public:
        mycomparison() {}
        bool operator() (const Guest& lhs, const Guest& rhs) {
            if (lhs.cT == rhs.cT) {
                return lhs.aT > rhs.aT;
            } else {
                return lhs.cT < rhs.cT;
            }
        }
};
priority_queue<Guest, vector<Guest>, mycomparison> Room;
queue<Guest> fromInput;
vector<Guest> outRoom;
int t = 30;


void input() {
    int N, aT, id, cT;
    
    cin >> N;
    while (N--) {
        cin >> aT >> id >> cT;
        Guest guest(aT, id, cT);
        if (guest.aT <= t) { // 
            Room.push(guest);
        } else {
            fromInput.push(guest);
        }
    }
}

void printPQ() {
    cout << "-----------------\n";
    auto room_cp = Room;
    while (!room_cp.empty()) {
        cout << room_cp.top().aT << " " << room_cp.top().id << " " << room_cp.top().cT << endl;
        room_cp.pop();
    }
}


void council(Guest& g) {
    int councilTime = 0;
    int minCouncilTime = 10;
    if (g.cT > minCouncilTime) {
        councilTime = g.cT/2;
        g.cT -= councilTime;
        t += councilTime;
        g.aT = t;
        Room.push(g);
    } else {
        // councilTime = 10;
        t += g.cT;
        outRoom.push_back(g);
    }
    // t += councilTime;
    // g.aT = t;
}


void process() {
    // auto room_cp = Room;
    // while (!Room.empty()) {
    //     Guest currentGuest = Room.top();
    //     Room.pop();
    //     council(currentGuest);
    // }
    while (true) {
        while (!Room.empty()) {
            Guest currentGuest = Room.top();
            Room.pop();
            council(currentGuest);
            // if (fromInput.front().aT <= t) {
            //     Room.push(fromInput.front());
            //     fromInput.pop();
            // }
            while (!fromInput.empty()) {
                if (fromInput.front().aT <= t) {
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
            t = fromInput.front().aT;
            Room.push(fromInput.front());
            fromInput.pop();
        }
    }
}

int main() {
    input();
    // printPQ();

    process();

    for (auto g : outRoom) {
        cout << g.id << endl;
    }
    // cout << 27 / 2;

    return 0;
}