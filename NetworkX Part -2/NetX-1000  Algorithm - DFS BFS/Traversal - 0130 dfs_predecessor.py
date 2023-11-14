
import networkx as nx
import matplotlib.pyplot as plt
import math
"""
Returns dictionary of predecessors in depth-first-search from source.

Parameters
G (NetworkX graph)

source (node, optional) – Specify starting node for depth-first search.

depth_limit (int, optional (default=len(G))) – Specify the maximum search depth.

Returns
pred – A dictionary with nodes as keys and predecessor nodes as values.

Return type
dict
"""

G = nx.Graph()  # Create empty graph
V= [0, 1,2,3, 5,4, 6,7,9,10]
E = [(0,3), (1,2), (2,5), (1,5), (1,6), (5,9), (3,10), (6,7), (4,10), (6,9), (6,10) ]

G.add_nodes_from( V )   # A list of nodes
G.add_edges_from( E )

print("\n dfs_predecessors from '0' ")
T = nx.dfs_predecessors(G, source=0)
for w in T :
    print(f"w= {w:3}, pred= {T[w]:3}")

print("\n dfs_predecessors with depth limit=2 ")
T = nx.dfs_predecessors(G, source=0, depth_limit=2)
for w in T :
    print(f"w= {w:3}, pred= {T[w]:3}")



#pos = nx.spring_layout(G, seed=21)
pos = nx.kamada_kawai_layout(G)  # 위치를 지정한다.


nx.draw_networkx_nodes (G,pos, node_color='tomato', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges (G,pos, width=2, edge_color='gray')
nx.draw_networkx_labels(G,pos, font_color='black', font_size=15,font_family='Pristina')
##
plt.title(" BFS Graph Traversal ")
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



