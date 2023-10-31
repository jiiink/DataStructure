
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.Graph()  # Creat empty graph
G.add_node(1)   # A list of nodes
G.add_nodes_from([2, 3])
G.add_nodes_from([-88, 100, 200])
G.add_edges_from([(1, 2), (200,1), (0,3),(3,-88), (1, 3), (0,-88),\
                  (1,4), (4,200), (200,3) ,(2,100), (3,100)])

pos=nx.spring_layout(G, seed=124)

mys= -88 ; myt = 2

from networkx.algorithms.connectivity import local_node_connectivity

cutnode = local_node_connectivity(G, mys, myt)
print("Minimum edge cut for", mys, "to", myt, "=", cutnode )


# Drawing Code
nx.draw_networkx_nodes (G, pos, node_size=800, node_color='b')
nx.draw_networkx_labels(G,pos,font_size=11, font_color='white', font_family='sans-serif')
nx.draw_networkx_edges (G, pos, width=2)

plt.axis('off')
plt.show()





