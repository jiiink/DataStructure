// STL implementation of Prim's algorithm for MST
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

typedef pair<int, int> iPair;  // iPair ==>  Integer Pair

class Graph {
    int V;    // No. of vertices
    list< pair<int, int> > *adj; // eeighted graph, need to store vertex and weight y edge

  public:
    Graph(int V);  // Constructor
    void addEdge(int u, int v, int w); // function to add an edge to graph
    void primMST();     // Print MST using Prim's algorithm
};


Graph::Graph(int V) { // Allocates memory for adjacency list
    this->V = V;
    adj = new list<iPair> [V];
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Graph::primMST() {

    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;

    int src = 0; // Taking vertex 0 as source
    vector<int> key(V, INF); // Create a vector for keys and initialize all keys as infinite (INF)
    vector<int> parent(V, -1);  // To store parent array which in turn store MST
    vector<bool> inMST(V, false);     // To keep track of vertices included in MST

    pq.push(make_pair(0, src));     // Insert source itself in priority queue and initialize its key as 0.
    key[src] = 0;

    /* Priority queue가 발 때 까지 계속 작업*/
    while (!pq.empty()) {
        // The first vertex in pair is the minimum key
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted key (key must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;  // Include vertex in MST

        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            //  If v is not in MST and weight of (u,v) is smaller than current key of v
            if (inMST[v] == false && key[v] > weight) {

                key[v] = weight;   // Updating key of v
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }

    for (int i = 1; i < V; ++i) // Print edges of MST using parent array
        printf("%d - %d\n", parent[i], i);

} // end of PrimMST( )

int main() {  // create the graph given in above fugure
    int V = 9;
    Graph g(V);    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.primMST();

    return 0;
}  // end of main( )

