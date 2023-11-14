#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-17
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.path_graph(6)
E = nx.path_graph(15)

# one plot, both graphs
fig, ax = plt.subplots()
nx.draw(G, ax=ax, with_labels=True, node_size=900, node_color="lightgreen")
nx.draw(E, ax=ax, with_labels=True, node_size=900, node_color="tomato")


plt.show( )