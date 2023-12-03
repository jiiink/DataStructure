

# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

G1 = nx.cycle_graph(7)
G2 = nx.path_graph(5)
nbunch = set ( [1,2,3,5])

SUBG = nx.subgraph(G1, nbunch)          # induce subgraphof G on nodes in nbunch
#G12  = nx.union(G1, G2)                 # graph union, G1 and G2 must be disjoint
CG12 = nx.cartesian_product(G1, G2)     # return Cartesian product graph
G12  = nx.compose(G1, G2)               # combine graphs identifying nodes common to both
PLG  = nx.complement(G1)                    # graph complement
EG   = nx.create_empty_copy(G1)             # return an empty copy of the same graph class
#UG   = nx.convert_to_undirected(G1)         # return an undirected representation of G
#DG   = nx.convert_to_directed(G1)           # return a directed representation of G

plt.subplot(221)
nx.draw( PLG, node_color='purple',node_size=150,with_labels=True ,width=3)

plt.subplot(222)
nx.draw( CG12, node_color='purple',node_size=150,with_labels=True,width=3)

plt.subplot(223)
nx.draw( SUBG, node_color='gray',node_size=150,with_labels=True,width=3)

plt.subplot(224)
nx.draw( EG, node_color='pink',node_size=150,with_labels=True,width=3)

plt.show()