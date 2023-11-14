#--------------------------------------------------------
# Author:      Zoh Que
# Created:     09-05-2023
#--------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt
import numpy

V= [1,2,3,4,5,6,7,8,9]
E= [(1,2), (2,3), (3,1), (3,4), (4,5), (5,6), (6,7), (7,8), (8,5), (9,5), (9,8)]

G = nx.Graph()
G.add_nodes_from( V )
G.add_edges_from( E )

pos   = nx.kamada_kawai_layout(G )
nx.draw_networkx_nodes(G, pos, node_size= 1200, node_color='b', alpha=0.5)


Out = sorted( map( sorted, nx.k_edge_components(G, k=2)))
print(f" Out= {Out}")

nx.draw_networkx_labels(G,pos,font_size=15, font_color='w', font_family='sans-serif')
nx.draw_networkx_edges(G, pos, width=2, alpha=0.3)

plt.axis('off')
plt.show()
