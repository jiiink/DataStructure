// 가장 일반적인 형식의 Graph 자료구조
#include <iostream>
#include <vector>
using namespace std;

struct Edge { // 에지(direct edge)
    int u, v;
};

class Graph {
  public:
    vector<vector<int>> adjList; // 방향 에지를 리스트를 vector of vectors

    Graph(vector<Edge> const &edges, int N) { // 그래프 생성자,.
        adjList.resize(N); // 필요한 크기만큼 vector를 마련
        for (auto &edge: edges) {
            adjList[edge.u].push_back(edge.v);  // insert (u,v) at vector[u]
            adjList[edge.v].push_back(edge.u);  // 한번 더 insert (u,v) at vector[v]
        }
    }
};  // end of Graph( )

void printGraph(Graph const& graph, int N) { // print adjacency list
    for (int i = 0; i < N; i++) { // print current vertex number
        cout << i << " --> ";
        for (int v : graph.adjList[i])   // 이웃 vertex를 모두 출력
            cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<Edge> edges = {  // 초기 그래프에 포함된 edge
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 3 }, {2, 7},
        { 1, 3 }, { 0, 3 }, { 4, 5 }, { 4, 6 }, {5, 6} };

    int N = 8;              // Number of nodes, 최대번호 + 1 = 6 + 1 = 7
    Graph graph(edges, N);  // N개 vertex의 그래프를 생성함.
    printGraph(graph, N);   // 그래프의 모든 edge를 출력함.

    /* 여러분에 해야 할 일.
    connected( graph, u   ) ; // u와 연결된 모든 vertex
    distance ( graph, u, v) ; // 그래프 G에서 u와 v의 거리
    */

    return 0;
}
