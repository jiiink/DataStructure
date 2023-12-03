#include <iostream>
#include <vector>
using namespace std;


struct Edge {
    int src, dest;
};


class Graph { // class to represent a graph object
  public:

    vector<vector<int>> adjList; // 인접 리스트


    Graph(vector<Edge> const &edges, int N) {    // Graph Constructor
        adjList.resize(N);   // resize the vector to N elements of type vector<int>

        for (auto &edge: edges) {  // add edges to the directed graph
            adjList[edge.src].push_back(edge.dest);  // insert at the end

            // Uncomment below line for undirected graph
            // adjList[edge.dest].push_back(edge.src);
        }
    }
};  // end of Graph class


void printGraph(Graph const& graph, int N) {
    for (int i = 0; i < N; i++) {
        cout << i << " --> ";

        // print all neighboring vertices of vertex i
        for (int v : graph.adjList[i])
            cout << v << " ";
        cout << endl;
    }
}


int main() { // Graph Implementation using STL
    vector<Edge> edges = {
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }
    };


    int N = 6;     // 노드의 갯수
    Graph graph(edges, N);     // construct graph
    printGraph(graph, N);

    return 0;
}
