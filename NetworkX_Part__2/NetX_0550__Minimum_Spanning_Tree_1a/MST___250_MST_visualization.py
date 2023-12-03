
from networkx.algorithms import tree
import networkx as nx
import matplotlib.pyplot as plt
import numpy

# Find minimum spanning edges by Kruskal’s algorithm

#G = nx.wheel_graph(12 )
G = nx.grid_2d_graph(3, 5)

pos = dict( (n, n) for n in G.nodes() )

#G.add_edge(0, 3, weight= 0.1)
#G.add_edge(3, 8, weight= 0.3)
mst = tree.minimum_spanning_edges(G, algorithm='kruskal', data=False)
T = nx.minimum_spanning_tree(G)
edgelist = list(mst)
print( "MST1=", edgelist )


plt.figure()
nx.draw_networkx( T, pos=pos, with_labels=True, node_color='y', node_size = 550)
plt.show()


