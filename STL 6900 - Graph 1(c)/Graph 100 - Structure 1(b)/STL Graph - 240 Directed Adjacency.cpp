#include <iostream>
#include <vector>
using namespace std;

struct Edge { // 방향 에지(direct edge)
    int src, dest;
};

class dGraph {
  public:
    vector<vector<int>> adjList; // 방향 에지를 리스트를 vector of vectors

    dGraph(vector<Edge> const &edges, int N) { //생성자,.
        adjList.resize(N); // 필요한 크기만큼 vector를 마련
        for (auto &edge: edges) {   // 에지를 directed graph에 추가함.
            adjList[edge.src].push_back(edge.dest);  // insert at the end
            // undirected graph이면 아래를 사용해야 함. (1,2)과 (2,1)을 추가 함.
            // adjList[edge.dest].push_back(edge.src);
        }
    }
};  // end of dGraph( )

void print_dGraph(dGraph const& graph, int N) { // print adjacency list
    for (int i = 0; i < N; i++) { // print current vertex number
        cout << i << " --> ";
        for (int v : graph.adjList[i])   // 이웃 vertex를 모두 출력
            cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<Edge> edges = {  // 초기 그래프
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }, {2, 6},
    };

    int N = 7;   // Number of nodes in the graph
    dGraph graph(edges, N);  // N개 vertex의 그래프를 생성함.
    print_dGraph (graph, N);   // 그래프를 출력함.

    return 0;
}
