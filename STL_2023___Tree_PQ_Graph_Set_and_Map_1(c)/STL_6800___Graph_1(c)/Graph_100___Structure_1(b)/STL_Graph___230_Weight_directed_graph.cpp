#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src, dest, weight;  // weight가 표시되어야 함.
};

typedef pair<int, int> Pair;


class Graph {
  public:
    vector<vector<Pair>> adjList;

    Graph(vector<Edge> const &edges, int N) {  // Graph Constructor
        // resize the vector to N elements of type vector<Pair>
        adjList.resize(N);

        for (auto &edge: edges) { // add edges to the directed graph
            int src = edge.src;
            int dest = edge.dest;
            int weight = edge.weight;

            adjList[src].push_back(make_pair(dest, weight)); // insert at the end

            // Uncomment below line for undirected graph
            // adjList[dest].push_back(make_pair(src, weight));
        }
    }
};


void printGraph(Graph const &graph, int N) {
    for (int i = 0; i < N; i++) {
        for (Pair v : graph.adjList[i])
            cout << "(" << i << ", " << v.first <<
                 ", " << v.second << ") ";
        cout << endl;
    }
}

int main() { // Weighted Directed Graph Implementation using STL
    vector<Edge> edges = {   // (x, y, w) -> edge from x to y having weight w
        { 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
        { 3, 2, 10 }, { 4, 5, 1 }, { 5, 4, 3 }
    };

    int N = 6;

    Graph graph(edges, N);

    printGraph(graph, N);

    return 0;
}
