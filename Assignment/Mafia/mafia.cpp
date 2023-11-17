#include <bits/stdc++.h>
using namespace std;

unordered_map<string, vector<string>> gang_chart;
unordered_map<string, pair<int, int>> count_result;

struct cmp {
    bool operator()(const string &lhs, const string &rhs) const {
        pair<int, int> tl = count_result[lhs], tr = count_result[rhs];
        swap(tl.first, tr.first);

        if (tl != tr) return tl > tr;
        return lhs > rhs;
    }
};

priority_queue<string, vector<string>, cmp> result;

void input() {
    int N;
    cin >> N;

    string underling_name, boss_name;
    while (--N) {
        cin >> underling_name >> boss_name;
        gang_chart[boss_name].emplace_back(underling_name);
    }
}

void cnt_underling(const string &name) {
    if (count_result.find(name) != count_result.end()) return; 

    int &underling_num = count_result[name].first;

    if (gang_chart.find(name) == gang_chart.end()) return;

    for (const auto &underling: gang_chart.at(name)) {
        cnt_underling(underling);
        underling_num += count_result[underling].first + 1;
    }
}

void setting_level(const string &name, int lev) {
    count_result[name].second = lev;

    for (const auto &underling: gang_chart[name])
        setting_level(underling, lev + 1);
}

void solve() {
    for (const auto &member: gang_chart)
        cnt_underling(member.first);

    auto top_boss = max_element(count_result.begin(), count_result.end(),
                                [](const auto &rhs, const auto &lhs) { return rhs.second < lhs.second; });

    setting_level(top_boss->first, 0);

    for (const auto &member: count_result)
        result.emplace(member.first);
}

void output() {
    while (!result.empty()) {
        cout << result.top() << endl;
        result.pop();
    }
}

int main() {
    input();
    solve();
    output();
}
