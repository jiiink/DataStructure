#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

import networkx as nx
import numpy as np
import matplotlib.pyplot as plt

G = nx.Graph()
G.add_edges_from(
    [('A', 'B'), ('A', 'C'), ('D', 'B'), ('E', 'C'), ('E', 'F'),
     ('B', 'H'), ('B', 'G'), ('B', 'F'), ('C', 'G')])

val_map = {'A': 1.0,
           'D': 0.57,
           'H': 0.0}

values = [val_map.get(node, 0.25) for node in G.nodes()]

nx.draw(G, cmap=plt.get_cmap('viridis'), \
        node_color=values, with_labels=True, font_color='white', seed=2020)
plt.show()