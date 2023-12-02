

import matplotlib.pyplot as plt
import networkx as nx
import random

import networkx as nx
from networkx.generators.small import krackhardt_kite_graph


random.seed(1000)

G = krackhardt_kite_graph()
pos=nx.spring_layout(G, iterations=100, seed=100)

print("pos=", pos)

labels = {}
for idx, node in enumerate(G.nodes()):
    labels[node] = str(node)+" *"
    print("idx, node, labels[node] =", idx, node, labels[node])

nx.draw_networkx_nodes(G, pos, node_size=800, node_color='y')
nx.draw_networkx_edges(G, pos)
#nx.draw_networkx_labels(G, pos, labels, font_color='w', font_size=16)

for p in pos:  # raise text positions  , 밑으로 내림
    pos[p][0] -= 0.07
    pos[p][1] += 0.03

nx.draw_networkx_labels(G, pos, font_size=12, font_color='r')

plt.axis('off')
plt.show() #