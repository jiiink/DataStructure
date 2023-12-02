#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2019-04-04
#-------------------------------------------------------------------------------

import matplotlib.pyplot as plt
import networkx as nx

G = nx.Graph()


G.add_edge('a', 'b', length=12.6 )
G.add_edge('a', 'c', length=8.2)
G.add_edge('c', 'd', length=6.1)
G.add_edge('c', 'e', length=2.7)
G.add_edge('c', 'f', length=13.9)
G.add_edge('a', 'd', length=1.3)

pos = nx.spring_layout(G)  # positions for all nodes

# nodes
nx.draw_networkx_nodes(G, pos, node_size=800, node_color='lightgreen')


# edges
nx.draw_networkx_edges(G, pos, width=6)
nx.draw_networkx_edge_labels(G, pos)

# labels
nx.draw_networkx_labels(G, pos,  font_size=15, font_family='sans-serif')

print("최단거리(b,e)=", nx.dijkstra_path(G,'b','e'))


plt.axis('off')
plt.show()
