

import networkx as nx
import matplotlib.pyplot as plt

G = nx.cycle_graph(5)


pos = nx.spectral_layout(G)

labels = {}
for idx, node in enumerate(G.nodes()):
    labels[node] = str(idx)+"|"+str(idx*idx)

elabels={}
print("G.edges()=", G.edges())
for idx, edge in enumerate(G.edges()):
    elabels[edge] = " "+str( edge[0]*edge[1] )+" "


# Drawing Code

nx.draw_networkx_edges(G, pos, width=2)
nx.draw_networkx_edge_labels(G,  pos, elabels, font_size=12, font_color='r' )
nx.draw_networkx_nodes (G, pos, node_size=800, node_color='g')
nx.draw_networkx_labels(G, pos, labels, font_size=12, font_color='white', font_family='sans-serif')
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림