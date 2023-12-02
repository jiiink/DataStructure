#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

import networkx as nx
import numpy as np
import matplotlib.pyplot as plt



G = nx.erdos_renyi_graph(20, 0.1)
pos = nx.spring_layout(G, iterations=700, seed = 2020 )
pos = nx.planar_layout(G )
pos = nx.circular_layout(G )

color_map = []
for node in G:
    if node < 10:
        color_map.append('khaki')
    else:
        color_map.append('orange')
nx.draw(G, pos, node_color=color_map, with_labels=True)
plt.show()