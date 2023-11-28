#include <bits/stdc++.h>
using namespace std;

const int INF = numeric_limits<int>::max();

struct adjNode {
    char val;
    int cost;
    adjNode* next;
};

class DiaGraph {
    adjNode* getAdjListNode(char value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode->cost = weight;
        newNode->next = head;
        return newNode;
    }
public:
    map<char, adjNode*> head;
    DiaGraph(vector<pair<char, char>> edges) {
        for (const auto& edge : edges) {
            char start_ver = edge.first;
            char end_ver = edge.second;
            int weight = 1;
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);
            head[start_ver] = newNode;
        }
    }
};

vector<pair<char, char>> edges;
vector<vector<char>> graph;
char f1, f2, f3;

void input() {
    int N;
    cin >> N;
    cin >> f1 >> f2 >> f3;
    for (int i = 0; i < N; i++) {
        char currentChar;
        vector<char> characters;
        while (cin >> currentChar && currentChar != '$') {
            characters.push_back(currentChar);
        }
        graph.push_back(characters);
    }
}

void makeEdge() {
    for (auto& c : graph) {
        for (int i = 1; i < c.size(); i++) {
            pair<char, char> edge(c[0], c[i]);
            edges.push_back(edge);
        }
    }
}

vector<int> dijkstra(const DiaGraph& graph, char start) {
    map<char, int> dist;
    for (const auto& entry : graph.head) {
        dist[entry.first] = INF;
    }
    #define pair_i_c pair<int, char>
    priority_queue<pair_i_c, vector<pair_i_c>, greater<pair_i_c>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        char u = pq.top().second;
        pq.pop();

        if (currentDist > dist[u]) {
            continue;
        }

        for (const adjNode* neighbor = graph.head.at(u); neighbor != nullptr; neighbor = neighbor->next) {
            char v = neighbor->val;

            if (currentDist%2 == 1) currentDist++;
            int newDist = currentDist + neighbor->cost;

            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    vector<int> distances;
    for (const auto& entry : dist) {
        distances.push_back(entry.second);
    }

    return distances;
}

vector<vector<int>> total;
void calculateDistances(const DiaGraph& graph) {
    array<char, 3> friends = {f1, f2, f3};
    for (const auto& entry : friends) {
        // char startNode = entry;
        vector<int> distances = dijkstra(graph, entry);

        total.push_back(distances);
    }
}

map<char, vector<int>> friends;
void getFriends(const DiaGraph& graph) {
    auto it = graph.head.begin();
    
    for (int i=0; i<total.size(); i++) {
        if ((*it).first == f1 || (*it).first == f2 || (*it).first == f3) {
            friends[(*it).first] = total[i];
        }
        it++;
    }
}

bool mycomp(const pair<char, int> &lhs, const pair<char, int> &rhs) {
    return lhs.second < rhs.second;
}

void findMinNode(const DiaGraph graph) {
    map<char, int> max_of_tuple;
    auto it = graph.head.begin();
    for (int i=0; i<friends[f1].size(); i++) {
        vector<int> tuple;
        for (const auto& f : friends) {
            tuple.push_back(f.second[i]);
        }
        max_of_tuple[(*it++).first] = *max_element(tuple.begin(), tuple.end());
    }

    pair_i_c min_value = *min_element(max_of_tuple.begin(), max_of_tuple.end(), mycomp);

    if (min_value.second == INF) {
        cout << "@\n" << -1 << endl;
    } else {
        cout << min_value.first << endl;
        cout << min_value.second << endl;
    }

}

int main() {
    input();
    makeEdge();

    DiaGraph diagraph(edges);
    calculateDistances(diagraph);
    getFriends(diagraph);
    findMinNode(diagraph);

    return 0;
}
