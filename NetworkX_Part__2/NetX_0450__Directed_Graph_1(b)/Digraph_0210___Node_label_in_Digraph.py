#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

g = nx.DiGraph()
g.add_nodes_from([1,2,3,4,5])
g.add_edge(1,2)
g.add_edge(4,2)
g.add_edge(3,5)
g.add_edge(2,3)
g.add_edge(5,4)

#pos=nx.circular_layout( g )

pos = nx.draw(g,  with_labels=True, node_color='g', \
              font_color='w', edge_color='orange', width=3,  node_size=1200 )

plt.draw()
plt.show()