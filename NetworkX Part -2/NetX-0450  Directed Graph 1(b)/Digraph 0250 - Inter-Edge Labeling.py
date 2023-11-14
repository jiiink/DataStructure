#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-23
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.DiGraph()
G.add_node(0, node_color="red")

G.add_node(1, node_color="orange")
G.add_node(2, node_color="orange")
G.add_node(3, node_color="orange")

G.add_node(4, node_color="yellow")
G.add_node(5, node_color="yellow")
G.add_node(6, node_color="yellow")
G.add_node(7, node_color="yellow")

G.add_edges_from([(0, 1),
                 (0, 2),
                 (0, 3),
                 (1, 4),
                 (2, 5),
                 (3, 6),
                 (3, 7)])

fig= plt.gcf()
ax = plt.gca()
pos=nx.circular_layout(G, center=(0, 0))
nx.draw_networkx_nodes(G, pos, cmap=plt.get_cmap('jet'))
#nx.draw_networkx_edges(G, pos, width=2,  arrows=True, arrowstyle = '-|>')
nx.draw_networkx_edges(G, pos, width=2 )

plt.axis('off')
plt.show() #