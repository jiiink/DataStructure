// 디버그 목적
#define TOTAL_TEST
#define COORDINATE_TEST

#include <iostream>
#include <vector>

using namespace std;

#ifdef TOTAL_TEST
#include <cassert>
#include <fstream>
#include <chrono>

using namespace chrono;
#endif

vector<pair<int, int>> fence;

int x1, y1, x2, y2;

int node_n;

int question;

int second_idx;

void processing_node_data() {
    if (x1 == x2) {
        while (y1 != y2) {
            if (y2 > y1)
                fence.emplace_back(x1, y1++);
            else
                fence.emplace_back(x1, y1--);
        }
    } else {
        while (x1 != x2) {
            if (x2 > x1)
                fence.emplace_back(x1++, y1);
            else
                fence.emplace_back(x1--, y1);
        }
    }
}

void input() {
#ifdef TOTAL_TEST
    fstream fin("004.in");

    fin >> node_n;

    fin >> x1 >> y1;

    for (int i = 1; i < node_n; ++i) {
        fin >> x2 >> y2;
        processing_node_data();

        if (i == node_n / 2 - 1) second_idx = fence.size();
    }

    x1 = fence.begin()->first;
    y1 = fence.begin()->second;
    processing_node_data();

    fin >> question;

    fin.close();
#else
    cin >> node_n;

    cin >> x1 >> y1;

    for (int i = 0; i < node_n - 1; ++i) {
        cin >> x2 >> y2;
        processing_node_data();

        if (i == node_n / 4)
            cout << perimeter;
    }

    x1 = fence.begin()->first;
    y1 = fence.begin()->second;
    processing_node_data();

    cin >> question;
#endif

#ifdef COORDINATE_TEST
    for (const auto &coordinate: fence) {
        cout << coordinate.first << '\t' << coordinate.second << '\n';
    }
#endif
}

void solve() {
}

int main() {
#ifdef TOTAL_TEST
    system_clock::time_point start = system_clock::now();
#endif
    input();
    solve();
#ifdef TOTAL_TEST
    system_clock::time_point end = system_clock::now();
    milliseconds milli = duration_cast<milliseconds>(end - start);

    cout << milli.count();
#endif
}