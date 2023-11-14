# Name:        module1
# Author:      Zoh
# Created:     21-01-2018
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G=nx.Graph()
G.add_node("a")
G.add_nodes_from(["b","c"])
nx.draw(G)
plt.show() # display


G.add_edge(1,2)
G.add_edge("book","orange")
edge = ("d", "e")
G.add_edge(*edge)
edge = ("a", "b")
G.add_edge(*edge)
G.add_edge( *(1, "book") )

print("Nodes of graph: ")
print((G.nodes()))
print("Edges of graph: ")
print((G.edges()))

#nx.draw(G)
pos = nx.kamada_kawai_layout(G)
pos = nx.circular_layout(G)
nx.draw_networkx_nodes (G,pos, node_color='gold', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges (G,pos, width=2, edge_color='gray')
nx.draw_networkx_labels(G,pos, font_color='black', font_size=14,font_family='Pristina')
plt.axis('off')
plt.show() # display
