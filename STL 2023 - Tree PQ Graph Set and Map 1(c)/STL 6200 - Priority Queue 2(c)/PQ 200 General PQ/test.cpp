#include <bits/stdc++.h> 
using namespace std;
struct cmp {
    bool operator() (int a, int b) {
        if (a/100 != b/100)
            return a/100 < b/100;
        else if (a/100 == 2)
            return a < b;
        else
            return a > b;
    }
};

int main() {
    int nums[] = {234, 147, 163, 282, 214, 160, 0, 134, 146, 0, 0, 0, 158, 132, 0, 213, 277, 0, 0, 0, 183, 105, 0};
    priority_queue<int> room;
    for(auto w : nums) {
        if (w != 0)
            room.push(w);
        else {
            if (!room.empty()) {
                cout << room.top() << endl;
                room.pop();
            }
        }
    }
}