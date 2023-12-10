#include <bits/stdc++.h>

using namespace std;

using tiiii = tuple<int, int, int, int>;

#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

pair<int, int> directions[4] = {{1,  0},
                                {0,  1},
                                {-1, 0},
                                {0,  -1}};

vector<vector<int>> costs, graph;

int INF = 20'000'000;

int N, T;

void input() {
    //fstream cin("023.inp");

    cin >> N >> T;

    graph.resize(N);

    for (int i = N - 1; i >= 0; --i) {
        graph[i].resize(N);

        for (auto &point: graph[i]) cin >> point;
    }

    //cin.close();
}

void solve() {
    priority_queue<tiiii, vector<tiiii>, greater<>> pq;

    costs.resize(N);

    for (auto &row: costs) {
        row.resize(N);

        for (auto &point: row) point = INF;
    }

    costs[0][0] = 0;

    pq.em(0, 0, 0, 0);
    pq.em(0, 1, 0, 0);

    int nowcost, nowdir, nowx, nowy;

    while (!pq.empty()) {
        tie(nowcost, nowdir, nowy, nowx) = pq.top();

        pq.pop();

        for (int i = 0; i < 4; ++i) {
            const auto &tmp_dir = directions[i];

            auto nexty = nowy + tmp_dir.first;
            auto nextx = nowx + tmp_dir.second;
            auto &nextcost = costs[nexty][nextx];

            auto tmpcost = nowcost + 1 + (nowdir == i ? 0 : T);

            if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= N ||
                graph[nexty][nextx] == 1 ||
                nextcost + T <= tmpcost)
                continue;

            nextcost = min(nextcost, tmpcost);

            pq.emplace(tmpcost, i, nexty, nextx);
        }
    }
}

void output() {
    /*
    for (const auto &row: costs) {
        for (const auto &point: row) cout << (point == INF ? -1 : point) << '\T';
        cout << endl;
    }
    */

    cout << (costs[N - 1][N - 1] == INF ? -1 : costs[N - 1][N - 1]);
}

int main() {
    fastio

    input();
    solve();
    output();
}
