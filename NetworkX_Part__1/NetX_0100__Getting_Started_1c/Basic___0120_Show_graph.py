
import networkx as nx
import matplotlib.pyplot as plt
import math


G = nx.Graph()  # Creat empty graph

V1= [ 1,2,3,4 ]
V2= [ 5, 6, 7, 8]
E1= [ (1,2), (2,3), (3,4), (4,5), (5,6)]
E2= [ (6,7), (7,8), (8,2), (3,6) ]

G.add_nodes_from( V1+V2 )
G.add_edges_from( E1+E2 )



G.add_node(9)
e=(2,9)
G.add_edge(*e) # unpack tuple, 반드시 *X로 넣어야 한다.
e=(6,8)
G.add_edge(*e) # unpack tuple, 반드시 *X로 넣어야 한다.


V3=[9]
E3=[ (2,9), (6,8)]

print("2. Nodes of Graph=",G.nodes())
print("3. Edges of Graph=",G.edges())

for x in G.nodes() :
    print("x=", x  , "degree=", G.degree( x ) , "이웃=", G[x])



pos = nx.kamada_kawai_layout(G)    # 위치를 지정한다.


nx.draw_networkx_nodes(G, pos, nodelist=V1, node_color='tomato', node_size=1000) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_nodes(G, pos, nodelist=V2, node_color='orange', node_size= 700)
nx.draw_networkx_nodes(G, pos, nodelist=V3, node_color='green',  node_size= 500) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges(G, pos, edgelist= E1, width=2)
nx.draw_networkx_edges(G, pos, edgelist= E2, edge_color='purple',    width=3)
nx.draw_networkx_edges(G, pos, edgelist= E3, edge_color='lightblue', width=5)
nx.draw_networkx_labels(G,pos, font_color='k', font_size=14, font_family='sans-serif')

plt.axis('off')
plt.title("A Node Edge Coloring : How to")
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



