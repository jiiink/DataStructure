#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to do DFS of graph recursively from a given vertex u.
void DFSUtil(int u, vector<int> adj[], vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";
    for (int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)  // 방문안 해 놈으로 넘어감.
            DFSUtil(adj[u][i], adj, visited);
}

// This function does DFSUtil() for all unvisited vertices.
void DFS(vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    for (int u=0; u<V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}

int main() {
    int V = 7;
    vector<int> adj[V];

    addEdge(adj, 0, 3);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 6);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 1, 6);
    addEdge(adj, 6, 3);
    addEdge(adj, 3, 5);
    addEdge(adj, 5, 0);

    DFS(adj, V);
    return 0;
}
