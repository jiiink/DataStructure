#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

#define MAX 100
#define visited 1
#define unvisited 0

class graph_stl {  // 그냥 edge (u,v)를 모두 저장하기
  private:
    std::vector< pair<int,int> > adj_list;
    std::vector< pair<int,int> >::iterator it;
    int n;
  public:
    void get_data();
    void traversal();
};

void graph_stl::get_data() {
    printf("\n Enter the total number of vertices: \n");
    scanf("%d",&n);
    int max_edge=n*(n-1)/2;
    int source,destination;
    for(int i=0; i<max_edge; i++) {
        printf("\n Enter the source and destination of edge %d & (0,0) to exit: ",i+1);
        scanf("%d%d",&source,&destination);
        if(source==0 && destination==0) {
            break;
        } else {
            adj_list.push_back(make_pair(source,destination));
        }
    }
}
void graph_stl::traversal() {
    printf("\n Vertex u connected with  vertex v:\n");
    for(it=adj_list.begin(); it!=adj_list.end(); it++) {
        printf("\t%d\t->->->\t\t%d",it->first,it->second);
        printf("\n");
    }

}
int main() {
    graph_stl graph;
    graph.get_data();
    graph.traversal();
    return 0;
}
