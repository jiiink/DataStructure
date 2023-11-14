#-------------------------------------------------------------------------------
# An antichain is a subset of a partially ordered set such that any two
# elements in the subset are incomparable.
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.DiGraph()
G.add_nodes_from( [1, 2, 3, 4, 5, 7, 8, 9] )
G.add_edges_from( [(1,2), (1,8), (3,2), (4,3), (4,1), (2,7),
                   (3,5),  (6,4), (9,5), (3,9), (7,8)])

# Need to specify a layout when calling the draw functions below
# spring_layout is the default layout used within networkx (e.g. by `draw`)

pos   = nx.kamada_kawai_layout(G )
#nodes = nx.draw_networkx_nodes(G, pos)

# Set edge color to red

nx.draw_networkx_nodes (G, pos, node_size=800, node_color='orange', alpha=0.5)
nx.draw_networkx_edges (G, pos, width=2, edge_color='gray' )
nx.draw_networkx_labels(G, pos, font_color='k', font_size=13, font_family='Candara')

anset = nx.antichains(G)
for w in anset :
    print(f" {w}")

plt.title("> DAG anti-chain < ")
plt.axis('off')
plt.show()