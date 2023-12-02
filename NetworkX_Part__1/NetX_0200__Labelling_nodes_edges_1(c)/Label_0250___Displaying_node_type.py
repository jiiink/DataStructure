

import matplotlib.pyplot as plt
import networkx as nx

G = nx.Graph()
G.add_nodes_from(['a', 'b', 'c', 'd', 'e', 'f', 'g'], type = 'machine')
G.add_nodes_from(['h', 'i', 'j'], type = 'human')
G.add_edges_from([('a', 'c'), ('a', 'b'), ('a', 'd'), ('a', 'f'), ('b', 'd'), ('b', 'e'), ('b', 'g'), ('c', 'f'), ('c', 'd'), ('d', 'f'), ('d', 'e'), ('d', 'g'), ('e', 'g'), ('f', 'g'), ('f', 'h'), ('g', 'h'), ('h', 'i'), ('i', 'j')])

plt.figure()
pos_nodes = nx.spring_layout(G, seed=123545, iterations=100 )

nx.draw(G, pos_nodes, with_labels=True)  #vertex 번호를 그

pos_attrs = {}
for node, coords in pos_nodes.items():
    pos_attrs[node] = (coords[0], coords[1] + 0.08)

node_attrs = nx.get_node_attributes(G, 'type')

custom_node_attrs = {}
for node, attr in node_attrs.items():
    custom_node_attrs[node] = "("+attr+")"

nx.draw_networkx_edges (G, pos_nodes, width=2, edge_color='gray')
nx.draw_networkx_nodes (G, pos_nodes, node_size=800, node_color='y', alpha=1.0  )
nx.draw_networkx_labels(G, pos_attrs, labels=custom_node_attrs, font_color='r' )
plt.axis('off')
plt.show() #