# 2023년 수정함.

import networkx as nx
import matplotlib.pyplot as plt
import numpy



# classic graphs
K_5     = nx.complete_graph(5)
K_3_5   = nx.complete_bipartite_graph(3,5)
barbell = nx.barbell_graph(10,10)
lollipop= nx.lollipop_graph(10,20)

plt.title("K_5 complete graph")
nx.draw(K_5, node_color="green", node_size=20, alpha=0.3)
plt.show()

plt.title("barbell_graph(10,10)")
nx.draw(barbell, node_color="orange", node_size=20, alpha=0.3)
plt.show()

# 다양한 random graphs
plt.title("nx.erdos_renyi_graph")
er = nx.erdos_renyi_graph(40,0.15 )
nx.draw(er, node_color="orange", node_size=20, alpha=0.3)
plt.show()

ws = nx.watts_strogatz_graph(40,3,0.1)
plt.title("watts_strogatz_graph")
nx.draw(ws, node_color="blue",node_size=20, alpha=0.3)
plt.show()

ba = nx.barabasi_albert_graph(40,5)
plt.title("barabasi_albert_graph")
nx.draw(ba, node_color="blue",node_size=20, alpha=0.3)
plt.show()

red = nx.random_lobster(40,0.9,0.9)
plt.title("random_lobster(40,0.9,0.9)")
nx.draw(red, node_color="blue", node_size=20, alpha=0.3)
plt.show()
