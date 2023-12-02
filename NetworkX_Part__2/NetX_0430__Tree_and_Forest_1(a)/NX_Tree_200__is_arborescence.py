#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

"""
In graph theory, an arborescence is a directed graph in which,
for a vertex u called the root and any other vertex v,
there is exactly one directed path from u to v.
An arborescence is thus the directed-graph form of a rooted tree.
"""

import networkx as nx
import matplotlib.pyplot as plt

g = nx.DiGraph()
g.add_edges_from([ (1,5), (1,4), (5,2), (5,3), (4,6), (6,10)] )

if nx.is_arborescence(g) :
    print("Yes, It is arborescence tree.")
else :
    print("No, It is not arborescence tree.")

#pos=nx.circular_layout( g )
pos = nx.draw(g,  with_labels=True, node_color='g', \
              font_color='w', edge_color='orange', width=3,  node_size=1200 )

plt.draw()
plt.show()