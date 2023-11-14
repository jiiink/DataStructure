
# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

G = nx.cycle_graph(5)
E = nx.path_graph(5)
W = nx.cartesian_product(G,E)
Q = nx.complement(E)
pos= nx.spring_layout(Q,iterations=100)

plt.subplot(221)
nx.draw(G, node_color='b')

plt.subplot(222)
nx.draw(E)

plt.subplot(223)
nx.draw(W,node_color='purple',node_size=150,with_labels=False,width=3)


plt.subplot(224)
nx.draw(Q, pos, node_color='y', with_labels=True)
plt.show()