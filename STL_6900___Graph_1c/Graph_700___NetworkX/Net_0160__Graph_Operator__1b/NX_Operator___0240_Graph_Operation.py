# https://networkx.github.io/documentation/stable/reference/algorithms/operators.html


import matplotlib.pyplot as plt
import networkx as nx

G1 = nx.path_graph(5)
G2 = nx.path_graph(3)
W  = nx.path_graph(8)
nx.draw( G1, with_labels=True, node_size=1000, font_color='w' )
plt.show()

#X = subgraph(G, W)      # induced subgraph view of G on nodes in nbunch
Q = nx.union(G1,G2, rename=('G-','H-'))         # graph union
nx.draw( Q, with_labels=True, node_size=1000, font_color='w' )
plt.show()

GG1 = nx.disjoint_union(G1,G2)    # graph union assuming all nodes are different
GG2 = nx.cartesian_product(G1,G2) # return Cartesian product graph
GG3 = nx.compose(G1,G2)           # combine graphs identifying nodes common to both
GG4 = nx.complement(GG3)            # graph complement
GG5 = nx.create_empty_copy(G1)     # return an empty copy of the same graph class

nx.draw( GG1, with_labels=True, node_size=1000, font_color='w' )
plt.show()
nx.draw( GG2, with_labels=True, node_size=1000, font_color='w' )
plt.show()
nx.draw( GG3, with_labels=True, node_size=1000, font_color='w' )
plt.show()
nx.draw( GG4, with_labels=True, node_size=1000, font_color='w' )
plt.show()
nx.draw( GG5, with_labels=True, node_size=1000, font_color='w' )
plt.show()