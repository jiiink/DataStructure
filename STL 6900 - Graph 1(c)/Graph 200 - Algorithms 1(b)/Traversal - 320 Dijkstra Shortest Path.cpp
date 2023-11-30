#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f

vii *G;   // Graph
vi Dist;  // distance of every other node from source.

void Dijkstra(int source, int N) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
    Dist.assign(N,INF);
    Dist[source] = 0;
    Q.push({0,source});
    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        for(auto &c : G[u]){
            int v = c.first;
            int w = c.second;
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
}  // end of Dijkstra( )


int main() {
    int N, M, u, v, w, source;  // nodes=N edges=M,
    cout << "정점의 수와 edge의 수를 입력  n m :" ;
    cin >> N >> M;              // (u,v) with weight w
    G = new vii[N+1];

    for(int i=0;i<M;++i){
        cout << "edge " <<  i << ": (u,v,w)의 수 u v w를 입력:"   ;
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    cout << "출발점을 입력하시오(0): " ;
    cin >> source;
    Dijkstra(source,N);

    cout << "출발점으로부터 모든 점까지의 거리:" ;
    for(int i=0;i<N;i++)
        cout<< "\n 거리 [" << source << ", " << i << "]=" << Dist[i]<<" ";
    cout<<endl;

    return 0;
}
