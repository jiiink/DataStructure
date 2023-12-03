#include <bits/stdc++.h>
using namespace std;
#define N 100


bool vis[N]; // mark nodes which we have already visited
vector <vector <int> > adj; // adjacency list vectors

void dfs(int node){
  if(vis[node]) // if already visited, return
    return;
  vis[node] = 1; // mark this node as visited
  // do something
  // example
  cout << "Reached node: " << node << endl;
  for(auto j: adj[i]){
    // call dfs on neighbouring nodes
    dfs(j);
  }
  // do something
  // example
  cout << "Bbye node: " << node << endl;
}

int main(){
  int n, m; // n = # nodes, m = # edges
  cin >> n >> m;
  adj.resize(n+1);
  for(int i = 1, x, y; i <= m; ++i){
    cin >> x >> y;
    // push to adjacency list
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  // Let's find what all nodes we can reach from node 1
  dfs(1);
}
