#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-17
#-------------------------------------------------------------------------------

import matplotlib.pyplot as plt
import networkx as nx

font_names = ['Times Roman', 'Consolas', 'Courier New', ]
family_names = ['sans-serif', 'serif', 'fantasy', 'monospace']


G   = nx.generators.florentine_families_graph()
pos = nx.spring_layout(G)


plt.figure(1)
nx.draw_networkx_nodes(G, pos)


for i, nodes in enumerate(G.nodes()) : # subgraph_members):
    f = font_names[(i % 3)]
    nx.draw_networkx_labels(G, pos, font_family=f, font_size=12)

# show the edges too
nx.draw_networkx_edges(G, pos)


plt.show()