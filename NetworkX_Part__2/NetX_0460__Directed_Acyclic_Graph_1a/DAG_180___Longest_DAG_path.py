#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-15
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.DiGraph()
G.add_nodes_from( [1, 2, 3, 4, 5, 7, 8, 9] )
G.add_edges_from( [(1,2, {'cost':5}), (1,8, {'cost':5}), (3,2, {'cost':1}),
                   (4,3, {'cost':3}), (4,1, {'cost':1}), (2,7, {'cost':2}),
                   (3,5, {'cost':19}), (6,4, {'cost':3}), (9,5, {'cost':7}),
                   (3,9, {'cost':1}), (7,8, {'cost':8})])

# Need to specify a layout when calling the draw functions below
# spring_layout is the default layout used within networkx (e.g. by `draw`)

pos   = nx.kamada_kawai_layout(G )



nx.draw_networkx_nodes (G, pos, node_size=800, node_color='orange', alpha=0.5)
nx.draw_networkx_edges (G, pos, width=2, edge_color='gray' )
nx.draw_networkx_labels(G, pos, font_color='k', font_size=13, font_family='Candara')

Longest = nx.dag_longest_path( G )
print(f" Longest DAG path = { Longest }")
Longest = nx.dag_longest_path_length( G )
print(f" DAG path length = { Longest }")


Longest = nx.dag_longest_path( G, weight="cost" )
print(f" Longest weighted DAG path = { Longest }")
Longest = nx.dag_longest_path_length( G, weight="cost" )
print(f" DAG weighted path length = { Longest }")


plt.title("> DAG ansester < ")
plt.axis('off')
plt.show()