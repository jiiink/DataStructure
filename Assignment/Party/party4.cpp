#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <limits>

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

    DiaGraph() {}

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

void displayAdjList(adjNode* ptr, char c) {
    while (ptr != nullptr) {
        cout << "(" << c << ", " << ptr->val << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

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

    cout << "Number of vertices: " << N << endl;
    for (auto n : graph) {
        for (auto c : n) {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << endl;
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

    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
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

            if (currentDist%3 == 1) currentDist+=2;
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


    for (const auto& entry : graph.head) {
        char startNode = entry.first;
        vector<int> distances = dijkstra(graph, startNode);

        total.push_back(distances);

        // cout << "Distances from node " << startNode << " to all other nodes:" << endl;
        // // for (int i = 0; i < distances.size(); ++i) {
        // // for (auto it=graph.head.begin(); it!=graph.head.end(); it++) {
        // //     // cout << "To node " << char('A' + i) << ": " << distances[i] << endl;
        // //     cout << "To node " << (*it).first << ": " << distances[i] << endl;
        // // }

        // int i = 0;
        // auto it = graph.head.begin();
        // while (it != graph.head.end()) {
        //     cout << "To node " << (*it++).first << ": " << distances[i++] << endl;
        // }

        cout << endl;
    }


    int min = INF;
    char minChar;
    auto it = graph.head.begin();
    for (int i=0; i<total.size(); i++) {
        int sum = 0;
        for (int j=0; j<total[i].size(); j++) {
            sum += total[j][i];
            if (sum == INF) {
                // cout << "The shortest cost node : " << "@" << " and total costs : " << -1 << endl;
                return;
            }
        }

        /*
            There are tuples that 3 friends go to the place.
            we have to select the place 
                that the maximum value of the tuple is the smallest.
                not just compare the total sum of tuple.
        */
        if (sum < min) {
            min = sum;
            minChar = (*it).first;
        }
        it++;
    }
    // cout << "The shortest cost node : " << minChar << " and costs : " << min << endl;
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

    // display
    for (const auto f : friends) {
        auto it = graph.head.begin();
        cout << "Distances from node " << f.first << " to all other nodes:\n";
        for (const auto i : f.second) {
            cout << "To node " << (*it++).first << ": " << i << endl;
        }
        cout << endl;
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

    

    pair<char, int> min_value = *min_element(max_of_tuple.begin(), max_of_tuple.end(), mycomp);

    if (min_value.second == INF) {
        cout << "@\n" << -1 << endl;
    } else {
        cout << "The shortest costs node : " << min_value.first << endl;
        cout << "It costs : " << min_value.second << endl;
    }

}

int main() {
    // char node1, node2, node3;
    input();
    makeEdge();

    DiaGraph diagraph(edges);
    for (auto& a : diagraph.head) {
        displayAdjList(a.second, a.first);
    }


    calculateDistances(diagraph);
    getFriends(diagraph);
    findMinNode(diagraph);

    return 0;
}
