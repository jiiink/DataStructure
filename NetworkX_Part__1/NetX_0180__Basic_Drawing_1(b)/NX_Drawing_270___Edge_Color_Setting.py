
import matplotlib.pyplot as plt
import networkx as nx

G = nx.star_graph(13)
pos = nx.spring_layout(G)
colors = list(range(13))

nx.draw(G, pos, node_color='#A0CBE2', edge_color=colors,
        width=4, edge_cmap=plt.cm.Blues, with_labels=True)
plt.show()