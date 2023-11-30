/*
  Adjacency List in Vector
*/

#include <iostream>
#include <vector>
using namespace std;


vector <vector <int> > adj_list;

int main(){
  int num_nodes, num_edges;
  cout << "Type the number of vertice and edges : " << endl ;
  cin >> num_nodes >> num_edges;
  cout << "Nodes: " << num_nodes << "  Edges: " << num_edges << endl ;

  adj_list.resize(num_nodes+1);

  for(int i = 0, u, v; i < num_edges; ++i){
    cout << "Type i-th edge : " << i << endl ; // take nodes between which we have an edge
    cin >> u >> v;
    cout << "(" << u << " , " << v << endl ;

    adj_list[u].push_back(v);     // undirected so we push v to list of u and vice versa
    adj_list[v].push_back(u);
  }

}

