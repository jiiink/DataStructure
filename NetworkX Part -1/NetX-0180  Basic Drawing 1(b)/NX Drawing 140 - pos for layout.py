

import matplotlib.pyplot as plt
import networkx as nx

G = nx.grid_2d_graph(4, 4)  # 4x4 grid

pos = nx.spring_layout(G, iterations=300, seed = 2020 )



nx.draw(G, pos, node_color='g', node_size=950, with_labels=True, width=2)


H = G.to_directed() # transform to directed graph

nx.draw(H, pos, node_color='khaki', node_size=1020, with_labels=True )

plt.show()
