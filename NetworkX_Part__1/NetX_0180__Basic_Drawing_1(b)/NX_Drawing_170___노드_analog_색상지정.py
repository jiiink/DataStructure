
import matplotlib.pyplot as plt
import networkx as nx

N=15
G = nx.cycle_graph(N)
pos = nx.spring_layout(G, iterations=500)
nx.draw(  G, pos, node_color=list(range( N )), \
          node_size=800, cmap=plt.cm.Blues, with_labels=True)
plt.show()