#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

pii direction[4] = {{1,  0},
                    {0,  1},
                    {-1, 0},
                    {0,  -1}};

vector<vector<int>> costs, graph;

int INF = 20'000'000;

struct Point {
    int cost, dir;
    pii coordinate;

    Point(int cost, int dir, pii coordinate) : cost(cost), dir(dir), coordinate(coordinate) {}

    bool operator<(const Point &rhs) const {
        return cost < rhs.cost;
    }
};

int N, t;

void input() {
    //fstream cin("023.inp");

    cin >> N >> t;

    graph.resize(N);

    for (int i = N - 1; i >= 0; --i) {
        graph[i].resize(N);

        for (auto &point: graph[i]) cin >> point;
    }

    //cin.close();
}

void solve() {
    priority_queue<Point> pq;

    costs.resize(N);

    for (auto &row: costs) {
        row.resize(N);

        for (auto &point: row) point = INF;
    }

    costs[0][0] = 0;

    pq.em(0, 0, make_pair(0, 0));
    pq.em(0, 1, make_pair(0, 0));

    int ncost, ndir, nowx, nowy;

    while (!pq.empty()) {
        ncost = pq.top().cost;
        ndir = pq.top().dir;
        tie(nowy, nowx) = pq.top().coordinate;

        pq.pop();

        for (int i = 0; i < 4; ++i) {
            const auto &tmp_dir = direction[i];

            auto nexty = nowy + tmp_dir.first;
            auto nextx = nowx + tmp_dir.second;
            auto &nextcost = costs[nexty][nextx];

            auto tmpcost = ncost + 1 + (ndir == i ? 0 : t);

            if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= N) continue;

            if (graph[nexty][nextx] == 1) continue;

            if (nextcost + t <= tmpcost) continue;

            nextcost = min(nextcost, tmpcost);

            pq.emplace(tmpcost, i, make_pair(nexty, nextx));
        }
    }
}

void output() {
    /*
    for (const auto &row: costs) {
        for (const auto &point: row) cout << (point == INF ? -1 : point) << '\t';
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
