#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()
G.add_nodes_from( [1, 2, 3, 4, 5, 7, 8, 9] )
G.add_edges_from( [(1,2), (1,8), (2,3), (3,4), (1,4), (2,7),
                   (3,5), (2,5), (4,6), (9,5), (9,3), (7,8)])

# Need to specify a layout when calling the draw functions below
# spring_layout is the default layout used within networkx (e.g. by `draw`)

pos   = nx.kamada_kawai_layout(G )
nodes = nx.draw_networkx_nodes(G, pos)

# Set edge color to red
nx.draw_networkx_edges(G, pos, width=1, edge_color='gray' )
nx.draw_networkx_nodes (G, pos, node_size=800, node_color='orange', alpha=1.0)

nx.draw_networkx_labels(G, pos, font_color='k', font_size=13, font_family='Candara')

plt.axis('off')
plt.show()