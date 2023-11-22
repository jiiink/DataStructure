#include <bits/stdc++.h>
using namespace std;


struct Guest {
    int aT, id, cT;
    Guest(int at, int id, int ct) : aT(at), id(id), cT(ct) {}
};

class mycomparison {
public:
    bool operator() (const Guest& lhs, const Guest& rhs) {
        return lhs.cT < rhs.cT;
    }
};
priority_queue<Guest, vector<Guest>, mycomparison> Room;



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

int main() {
    input();
    printPQ();
    return 0;
}