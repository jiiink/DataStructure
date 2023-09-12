#include <iostream>
#include <vector>

using namespace std;

//#define TEST

#ifndef TEST
#include <fstream>
#endif

vector<pair<int, int> > fence;

int x1, y1_, x2, y2;

int node_n;

int question;

int ssp; // second_start_point

void processing_node_data() {
    if (x1 == x2) {
        while (y1_ != y2) {
            if (y2 > y1_)
                fence.emplace_back(x1, y1_++);
            else
                fence.emplace_back(x1, y1_--);
        }
    } else {
        while (x1 != x2) {
            if (x2 > x1)
                fence.emplace_back(x1++, y1_);
            else
                fence.emplace_back(x1--, y1_);
        }
    }
}

void input() {
#ifndef TEST
    fstream cin("004.inp");
#endif
    cin >> node_n;

    cin >> x1 >> y1_;

    for (int i = 1; i < node_n; ++i) {
        cin >> x2 >> y2;
        processing_node_data();

        if (i == node_n / 2 - 1) ssp = fence.size();
    }

    x2 = fence.begin()->first;
    y2 = fence.begin()->second;
    processing_node_data();

    cin >> question;
#ifndef TEST
    cin.close();
#endif
}

void solve() {
    question %= fence.size();

    int a, b;

    if (question <= ssp) {
        a = min(ssp - question, question);
        b = max(ssp - question, question);
    } else {
        question -= ssp;
        a = max(int(fence.size()) - question, ssp + question);
        b = min(int(fence.size()) - question, ssp + question);
    }

    cout << fence[a].first << ' ' << fence[a].second << '\n'
         << fence[b].first << ' ' << fence[b].second;
}

int main() {
    input();
    solve();
}