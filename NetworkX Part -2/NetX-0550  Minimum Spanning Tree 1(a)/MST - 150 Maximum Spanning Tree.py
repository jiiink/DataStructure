
from networkx.algorithms import tree
import networkx as nx
import matplotlib.pyplot as plt
import numpy

# Find minimum spanning edges by Kruskal’s algorithm
G = nx.cycle_graph(6)
G.add_edge(1, 3, weight=2.3)
G.add_edge(1, 5, weight=0.2)
G.add_edge(1, 4, weight=0.1)
maxst  = nx.maximum_spanning_tree(G)

medges = tree.maximum_spanning_edges(G)
for w in medges :
    print(w)

pos = nx.spring_layout(maxst)
nx.draw_networkx( maxst, pos=pos, with_labels=True, node_color='tomato', node_size = 380)

plt.axis('off')
plt.show()


