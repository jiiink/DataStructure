#include <deque>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
using namespace std ;

template<class Key>
class Graph {
  public:     // adds an undirected edge
    void addEdge(Key v1, Key v2) {
        Adj_.insert( {v1,v2} );
    }
    void printAdj();
    void BFS(Key v);     // Graph traversal functions
    void DFS(Key v);
  private:      // Adjacency list
   unordered_multimap<Key,Key> Adj_;
};

template<class Key> void Graph<Key>::printAdj() {
    auto it = Adj_.begin();
    while( it != Adj_.end() ) {
       cout << it->first << ": ";
        auto range = Adj_.equal_range(it->first);
        for ( auto local_it = range.first; local_it!= range.second; ++local_it ) {
           cout << local_it->second << " ";
            ++it;
        }
       cout << "\n";

    }
} // end of template<class>


//  BFS는 v부터 시작한다. 먼저 큐 Q를 만든다.
//  v를 방문한 경우에는 visited라고 mark하고 이것을 Q에 넣는다.
//  while Q is non-empty일때 까지
//  Q에서 head 원소 u를 꺼내서 이것을
//  mark하고 이웃한 unvisited neighbours of u를 모두 큐에 쳐 넣는다.


template<class Key> void Graph<Key>::BFS(Key v) {
   unordered_set<Key> visited;
   deque<Key> Q;
   Q.push_back(v);
   visited.insert(v);

    while(Q.size() > 0) { // while the queue is non-empty do
        v = Q.front();
        Q.pop_front();         // remove vertex at the front of the queue
       cout << v << " ";         // iterate over v's neighbors
        for(auto neighbor = Adj_.find(v); neighbor != Adj_.end(); ++neighbor) {
            // check if neighbor has been visited
            auto isthere = visited.find(neighbor->second);
            if(isthere == visited.end()) { // if neighbor has not been visited then
                visited.insert(neighbor->second);
                Q.push_back(neighbor->second); // add neighbor to back of the queue
            }
        }
    }
   cout << "\n";
} // end of BFS( )

// DFS starting from vertex v and create a stack S
// mark v as visited and push v onto S
//  while S is non-empty
//  peek at the top v of S
//  if v has an (unvisited) neighbor u, mark u and push it onto S  else pop S

template<class Key> void Graph<Key>::DFS(Key v) {
   unordered_set<Key> visited;   // set of visited vertices
   vector<Key> S;
   visited.insert(v);
   S.push_back(v);
   cout << v << " ";

    while(S.size() > 0) {         // peek the top v of the stack
        v = S.back();     // find the index of the first unvisited neighbor of v
        typename unordered_multimap<Key,Key>::iterator neighbor;
        for(neighbor = Adj_.find(v); neighbor != Adj_.end(); ++neighbor) {
            // check if neighbor has been visited
            auto isthere = visited.find( neighbor->second );
            if( isthere == visited.end() )
                break;
        }
        if(neighbor != Adj_.end() ) { // the case in which an unvisited neighbor is found
            visited.insert(neighbor->second); // mark the neighbor u as visited
            S.push_back(neighbor->second);  // push u onto the stack
           cout << neighbor->second << " ";
        } else {
            S.pop_back();
        }
    }
}  // end of DFS( )

int main() {
    Graph<std::string> myGraph;
    myGraph.addEdge("a","b");
    myGraph.addEdge("b","c");
    myGraph.addEdge("c","d");
    myGraph.addEdge("b","a");
    myGraph.addEdge("c","b");
    myGraph.addEdge("d","c");
    myGraph.addEdge("c","e");
    myGraph.addEdge("e","f");
    myGraph.addEdge("b","f");
    myGraph.addEdge("e","c");
    myGraph.addEdge("f","e");
    myGraph.addEdge("f","b");
    myGraph.addEdge("f","g");
    myGraph.addEdge("a","g");
    myGraph.addEdge("g","f");
    myGraph.addEdge("g","a");
   cout << "\n 인접리스트 :\n";      myGraph.printAdj();
   cout << "\n\n vertex a에서 시작하는 BFS 방문순서:\n";
    myGraph.BFS("a");
   cout << "\n\n vertex a에서 시작하는 DFS 방문순서:\n";
    myGraph.DFS("a");
}
