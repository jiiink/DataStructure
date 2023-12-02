

import matplotlib.pyplot as plt
import networkx as nx

G = nx.DiGraph()
G.add_edges_from([(1, 2), (1, 3), (2, 3)])
arcs = nx.draw_networkx_edges(G, pos=nx.spring_layout(G), width=6)
alphas = [0.3, 0.6, 0.9]

for i, arc in enumerate(arcs):  # change alpha values of arcs
    arc.set_alpha(alphas[i])


plt.axis('off')
plt.show() #