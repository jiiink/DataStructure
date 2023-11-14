#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

import networkx as nx
import numpy as np
import matplotlib.pyplot as plt



G = nx.erdos_renyi_graph(8,0.4)
p = nx.shortest_path(G,0,3)

for e in G.edges():
    G[e[0]][e[1]]['color'] = 'black'

for v in G.nodes():
    print(v)

#G[3]['color']='green'

for i in range(len(p)-1):
    G[p[i]][p[i+1]]['color'] = 'orange'

edge_color_list = [ G[e[0]][e[1]]['color'] for e in G.edges() ]
nx.draw(G, edge_color = edge_color_list, with_labels = True)
plt.show()