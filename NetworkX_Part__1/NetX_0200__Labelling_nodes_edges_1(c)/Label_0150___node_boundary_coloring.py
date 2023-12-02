#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

from networkx import *
import matplotlib.pyplot as plt
G = Graph()
G.add_node(1); G.add_node(3); G.add_node(5); G.add_node(7)
G.add_edge(1,3);G.add_edge(1,5);G.add_edge(1,7);G.add_edge(2,3)

# spring_layout이 기본 layout
pos   = spring_layout(G)
nodes = draw_networkx_nodes(G, pos)

# Set edge color to red
nodes.set_edgecolor('r')
draw_networkx_edges(G, pos)

# Uncomment this if you want your labels
draw_networkx_labels(G, pos, font_color='white')
plt.axis('off')
plt.show()