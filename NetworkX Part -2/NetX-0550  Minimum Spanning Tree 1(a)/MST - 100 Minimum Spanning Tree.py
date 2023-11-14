
from networkx.algorithms import tree
import networkx as nx
import matplotlib.pyplot as plt
import numpy

# Find minimum spanning edges by Kruskal’s algorithm
G = nx.cycle_graph(6)
G.add_edge(1, 3, weight=2)
G.add_edge(1, 5, weight=0.2)
G.add_edge(1, 4, weight=0.1)
mst1  = nx.minimum_spanning_tree(G)
mst1e = tree.minimum_spanning_edges(G, algorithm='kruskal', data=False)
#mst1 = tree.minimum_spanning_edges(G, algorithm='prim',    data=False)
edgelist = list(mst1e)
MST1 = sorted(sorted(e) for e in edgelist)
print( "MST1=", MST1 )

pos = nx.spring_layout(mst1)
nx.draw_networkx( mst1, pos=pos, with_labels=True, node_color='tomato', node_size = 380)

plt.axis('off')
plt.show()


