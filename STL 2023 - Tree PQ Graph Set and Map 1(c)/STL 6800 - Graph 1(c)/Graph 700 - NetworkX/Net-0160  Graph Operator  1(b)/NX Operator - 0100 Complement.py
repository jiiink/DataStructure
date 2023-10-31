
# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

G = nx.cycle_graph(4)
E = nx.path_graph(3)
W = nx.cartesian_product(G,E)
Q = nx.complement(E)
pos= nx.spring_layout(Q,iterations=100)

plt.subplot(221)
nx.draw(G, node_color='b',  with_labels=True,  font_color="w")

plt.subplot(222)
nx.draw(E,  with_labels=True , font_color="w", )

plt.subplot(223)
nx.draw(W,node_color='purple',node_size=550, with_labels=True,font_color="w", width=3)


plt.subplot(224)
nx.draw(Q, pos, node_color='y', with_labels=True,  font_color="w")
plt.show()