#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt


G = nx.DiGraph()
G.add_edges_from([ (3,1), (2,3), (2,4), (5,6), (5,7), (5,10), (2,9) ] )

pos=nx.circular_layout( G )
pos=nx.planar_layout( G )
nx.draw( G,  pos, with_labels=True, node_color='tomato', \
              font_color='w', edge_color='orange', width=3,  node_size=1000 )

print( "Is it a tree? " ,  nx.is_tree(G) )
print( "Is it a branching? " ,nx.is_branching(G) )

plt.draw( )
plt.show()