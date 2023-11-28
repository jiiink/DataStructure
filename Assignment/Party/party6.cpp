#include <bits/stdc++.h>
using namespace std;

struct adjNode {
    char val;
    int cost = 1;
    adjNode* next;
};

class DiaGraph {
    adjNode* getAdjListNode(char value, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode->next = head;
        return newNode;
    }
public:
    map<char, adjNode*> head;
    DiaGraph(vector<pair<char, char>> edges) {
        for (const auto& edge : edges) {
            char start_ver = edge.first;
            adjNode* newNode = getAdjListNode(edge.second, head[start_ver]);
            head[start_ver] = newNode;
        }
    }
};

vector<pair<char, char>> edges;
char f1, f2, f3;
int N;
void input() {
    cin >> N;
    cin >> f1 >> f2 >> f3;
    for (int i = 0; i < N; i++) {
        char currentChar;
        char start;
        cin >> start;
        while (cin >> currentChar && currentChar != '$')
            edges.emplace_back(start, currentChar);
    }
}

vector<int> dijkstra(DiaGraph& g, char start) {
    map<char, int> dist;
    for (const auto& entry : g.head)
        dist[entry.first] = INT_MAX;
    #define pair_i_c pair<int, char>
    priority_queue<pair_i_c, vector<pair_i_c>, greater<pair_i_c>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        char u = pq.top().second;
        pq.pop();

        if (currentDist > dist[u])
            continue;

        for (const adjNode* neighbor = g.head.at(u); neighbor != nullptr; neighbor = neighbor->next) {
            char v = neighbor->val;

            if (currentDist%3 == 1) currentDist+=2; // when pass the intersection
            int newDist = currentDist + neighbor->cost;

            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    vector<int> distances;
    for (const auto& entry : dist)
        distances.push_back(entry.second);
    return distances;
}

map<char, vector<int>> fs;
void calculateDistances(DiaGraph& g) {
    array<char, 3> friends = {f1, f2, f3};
    for (const auto& entry : friends)
        fs[entry] = dijkstra(g, entry);
}

bool mycomp(const pair<char, int> &lhs, const pair<char, int> &rhs) {
    return lhs.second < rhs.second;
}

void findMinNode(DiaGraph g) {
    map<char, int> max_of_tuple;
    auto it = g.head.begin();
    for (int col=0; col<N; col++) {
        vector<int> tuple;
        for (auto& f : fs) 
            tuple.push_back(f.second[col]);
        max_of_tuple[(*it++).first] = *max_element(tuple.begin(), tuple.end());
    }
    pair<char, int> min_value = *min_element(max_of_tuple.begin(), max_of_tuple.end(), mycomp);
    if (min_value.second == INT_MAX)
        min_value = {'@', -1};
    cout << min_value.first << endl << min_value.second << endl;
}

int main() {
    input();
    DiaGraph diagraph(edges);
    calculateDistances(diagraph);
    findMinNode(diagraph);

    return 0;
}
