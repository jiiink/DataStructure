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
            return lhs.cT < rhs.cT;
        }
};
priority_queue<Guest, vector<Guest>, mycomparison> Room;
vector<Guest> outRoom;


void input() {
    int N, aT, id, cT;
    
    cin >> N;
    while (N--) {
        cin >> aT >> id >> cT;
        Guest guest(aT, id, cT);
        Room.push(guest);
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
    if (g.cT > 10) {
        g.cT -= g.cT/2;
        g.aT += g.cT;
        Room.push(g);
    } else {
        outRoom.push_back(g);
    }
}


void process() {
    // auto room_cp = Room;
    while (!Room.empty()) {
        Guest currentGuest = Room.top();
        Room.pop();
        council(currentGuest);
    }
}

int main() {
    input();
    // printPQ();

    process();

    for (auto g : outRoom) {
        cout << g.id << " ";
    }

    return 0;
}