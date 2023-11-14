
import networkx as nx
import matplotlib.pyplot as plt
import math

# 방문한, 집적거린 모든 edge의 순서를 출력한다. node가 아니라.

G = nx.Graph()

nodes = [0, 1, 2, 3, 4]
edges = [(0, 1), (1, 0), (2,3), (3,4), (1, 0), (2, 1), (3, 1)]


G.add_nodes_from( nodes )   # A list of nodes
G.add_edges_from( edges )

T = list(nx.edge_bfs(nx.Graph(edges), nodes))
print("\n edge_bfs(nx.Graph(edges), nodes) ")
for w in T :
    print(w)


T = list(nx.edge_bfs(nx.DiGraph(edges), nodes))
print("\n edge_bfs(nx.DiGraph(edges), nodes) ")
for w in T :
    print(w)

T = list(nx.edge_bfs(nx.MultiGraph(edges), nodes))
print("\n edge_bfs(nx.MultiGraph(edges), nodes) ")
for w in T :
    print(w)


T = list(nx.edge_bfs(nx.MultiDiGraph(edges), nodes))
print("\n edge_bfs(nx.MultiDiGraph(edges), nodes) ")
for w in T :
    print(w)

T = list(nx.edge_bfs(nx.MultiDiGraph(edges), nodes))
print("\n edge_bfs(nx.MultiDiGraph(edges), nodes) ")
for w in T :
    print(w)

T = list(nx.edge_bfs(nx.DiGraph(edges), nodes, orientation="ignore"))
print("\n edge_bfs( ), orient='ignore'  ")
for w in T :
    print(w)

#pos = nx.spring_layout(G, seed=21)
pos = nx.kamada_kawai_layout(G)  # 위치를 지정한다.


nx.draw_networkx_nodes (G,pos, node_color='gold', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges (G,pos, width=2, edge_color='gray')
nx.draw_networkx_labels(G,pos, font_color='black', font_size=14 )
##
plt.title(" The Minimal Working Graph ")
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



