

import matplotlib.pyplot as plt
import networkx as nx
import random
from networkx.generators.small import krackhardt_kite_graph
from string import ascii_lowercase

random.seed(1000)

G = krackhardt_kite_graph()
pos=nx.spring_layout(G, iterations=100, seed=100)

print("pos=", pos)



print("pos=", pos)

labels = {}
for idx, node in enumerate(G.nodes()):
    labels[node] = str(idx)



nx.draw_networkx_nodes(G, pos, node_size=800, node_color='tomato')
nx.draw_networkx_edges(G, pos, edge_color='g' )

for w in pos:  # raise text positions  , 밑으로 내림
    pos[w][1] += 0.04  # y축으로 올림
    pos[w][0] -= 0.03  # x축 왼쪽으로 내림

nx.draw_networkx_labels(G, pos, labels, font_color='k', font_size=13)


plt.axis('off')
plt.show() #