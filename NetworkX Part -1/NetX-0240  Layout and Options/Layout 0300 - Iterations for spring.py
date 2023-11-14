
import matplotlib.pyplot as plt
import networkx as nx

N=15
Looping= 10
G = nx.cycle_graph(N)
pos = nx.spring_layout(G, iterations= Looping )
nx.draw(  G, pos, node_size=800, edge_color='gray', node_color='y', with_labels=True, width=4 )
plt.show()