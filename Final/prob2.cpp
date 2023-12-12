#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, map<int, int> > Safari;
    int x, y;

    // 동물이 나타난 지점
    vector<pair<int, int>> danger = {
        {-1, 0}, {5, 3}, {-3, 1}, {-3, 8},
        {1, 0}, {-1, 0}, {-3, 1}, {1, 0},
        {5, 3}, {-3, 8}, {5, 3}, {-3, 8},
        {3, 0}, {-2, 9}, {3, 5}, {-3, 8} 
    };
    
    for (auto w : danger) { // map Safari[][] 에 보고된 지점을 기록.
        x = w.first;
        y = w.second;
        
        Safari[x][y]++;
    }

    // Safari[x][y] 중에서 2번 이상 보고된 모든 지점을 출력
    cout << "\n\n\n >> Duplicated Positions << \n";
    for (auto z : Safari) {
        x = z.first;
        for (auto w : Safari[x]) {
            y = w.first;
            if (Safari[x][y] > 1) {
                cout << "(" << x << ", " << y << ") ";
            }
        } // end of for w
    } // end of for z
    cout << endl;
} // end of main