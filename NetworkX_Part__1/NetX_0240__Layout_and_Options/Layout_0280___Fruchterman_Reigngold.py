

import matplotlib.pyplot as plt
import networkx as nx
import itertools

d = list("abcdefghij")
f = [1,2,3,4,5,6,7,8,9,10]
b="X"
for i in d:
  G.add_edge('"' + i + '"',b)

pos=nx.fruchterman_reingold_layout(G, k=0.5, iterations=50)

nx.draw_networkx_nodes(G,pos,node_size=330, node_color="y")

nx.draw_networkx_edges(G,pos, width=1.3,alpha=1,edge_color='r')

nx.draw_networkx_labels(G,pos,font_size=1,font_family='sans-serif')

for i,j in zip(d,f):
    nx.draw_networkx_edge_labels(G,pos, {('"' + i + '"',b):j}, font_size=17, label_pos= 0.50)

plt.axis('off')
plt.show()
