# Using a stochastic graph generator, e.g.,
import matplotlib.pyplot as plt
import networkx as nx
import random


random.seed(100)

er = nx.erdos_renyi_graph(30, 0.15, seed=100 )
nx.draw( er )
plt.show()

ws = nx.watts_strogatz_graph(30, 3, 0.2, seed=100 )
nx.draw( ws )
plt.show()

ba = nx.barabasi_albert_graph(10, 5, seed=100)
nx.draw( ba )
plt.show()

red = nx.random_lobster(20, 0.9, 0.9, seed=100)
nx.draw( red )
plt.show()
