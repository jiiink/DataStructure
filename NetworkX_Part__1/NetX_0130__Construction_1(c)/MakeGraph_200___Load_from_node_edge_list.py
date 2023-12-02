#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

from networkx import *
import matplotlib.pyplot as plt
G = Graph()


G.add_nodes_from( [1, 2, 3, 4, 5, 7, 9] )
G.add_edges_from( [(1,2), (3,4), (5,7), (1,7), (1,9), (4,9)])

# Need to specify a layout when calling the draw functions below
# spring_layout is the default layout used within networkx (e.g. by `draw`)
pos   = spring_layout(G, seed=100)
nodes = draw_networkx_nodes(G, pos)

# Set edge color to red
nodes.set_edgecolor('blue')
nx.draw_networkx_edges(G, pos, width=3)


nx.draw_networkx_nodes (G, pos, node_size=600, node_color='orange', alpha=1.0)
nx.draw_networkx_edges (G, pos)
nx.draw_networkx_labels(G, pos, font_color='w', font_size=11, font_family='Candara')


plt.show()