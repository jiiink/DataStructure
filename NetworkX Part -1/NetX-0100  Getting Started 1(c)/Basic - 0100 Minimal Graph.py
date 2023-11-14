
import networkx as nx
import matplotlib.pyplot as plt
import math


G = nx.Graph()  # Create empty graph
V= [1,2,5,6,7,9,10]
E = [(1,2), (2,5), (1,5), (1,6), (5,9), (6,7), (6,9), (6,10) ]

G.add_nodes_from( V )   # A list of nodes
G.add_edges_from( E )

print("2. Nodes of Graph=",G.nodes())
print("3. Edges of Graph=",G.edges())
#nx.draw(G)

#pos = nx.spring_layout(G, seed=21)
pos = nx.kamada_kawai_layout(G)  # 위치를 지정한다.


nx.draw_networkx_nodes (G,pos, node_color='gold', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges (G,pos, width=2, edge_color='gray')
nx.draw_networkx_labels(G,pos, font_color='black', font_size=14,font_family='Pristina')
##
plt.title(" The Minimal Working Code ")
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



