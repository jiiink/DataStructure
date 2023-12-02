
import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

er= nx.erdos_renyi_graph(100, 0.15)
ws= nx.watts_strogatz_graph(30, 3, 0.1)
ba= nx.barabasi_albert_graph(100, 5)
red = nx.random_lobster(100, 0.9, 0.9)


nx.draw( er )
plt.show( )

nx.draw( ws )
plt.show( )

nx.draw( ba )
plt.show( )

nx.draw( red )
plt.show( )