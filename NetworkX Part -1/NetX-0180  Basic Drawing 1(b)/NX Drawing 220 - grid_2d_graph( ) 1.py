

import sys
import matplotlib.pyplot as plt
import networkx as nx

G = nx.grid_2d_graph(3, 4)  # 5x5 grid


nx.write_edgelist(G, path="grid.edgelist", delimiter=":")

# read edgelist from grid.edgelist
H = nx.read_edgelist(path="grid.edgelist", delimiter=":")

nx.draw(H, node_size=1100, node_color='y', with_labels=True)

plt.show()