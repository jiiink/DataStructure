

import matplotlib.pyplot as plt
import networkx as nx

G = nx.path_graph(3)
bb = nx.edge_betweenness_centrality(G, normalized=False)
nx.set_edge_attributes(G, bb, 'betweenness')

nx.add_path(G, [3, 4, 5], color='red')
color = nx.get_edge_attributes(G, 'color')
print("color=", color[(4, 5)] )

print("1=", G.edges[1, 2]['betweenness'])

labels = []
nx.set_edge_attributes(G, labels, 'labels')
labels.append('foo')

print("2=", G.edges[0, 1]['labels'])
print("3=", G.edges[1, 2]['labels'])

nx.draw(G)


plt.axis('off')
plt.show() #