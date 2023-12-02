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
g.add_edge(5,1)

pos = nx.spring_layout( g )
nx.draw(g, pos, with_labels=True, node_color='g', width=3, \
             edge_color='tomato', font_color='w', node_size=700 )

plt.draw()
plt.show()