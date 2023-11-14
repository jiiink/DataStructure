
import networkx as nx
import matplotlib.pyplot as plt

# Step 1: Build up a graph
G = nx.Graph()
G.add_node('n1', alias='source')
G.add_node('n2', alias='sink')
G.add_node('n3', alias='book')
G.add_node('n4', alias='winter')
G.add_node('n5', alias='box')
G.add_node('n6', alias='IPA')
G.add_node('n7', alias='dragon')
G.add_edge('n1', 'n2', weight =34)
G.add_edge('n2', 'n3', weight =111)
G.add_edge('n3', 'n4', weight = 56)
G.add_edge('n4', 'n5', weight = 99.78)
G.add_edge('n5', 'n1', weight = 5)
G.add_edge('n2', 'n5', weight = -87 )
G.add_edge('n2', 'n6', weight = -87 )
G.add_edge('n3', 'n7', weight = 1 )
G.add_edge('n6', 'n7', weight = 111 )

# Step 2: Draw the graph and suppress node labels (node id)
pos = nx.circular_layout(G)

nx.draw_networkx(G, pos, with_labels=False) # OR: nx.draw(G, pos)

# Step 3: Draw the graph with the specific node labels
node_labels = nx.get_node_attributes(G, 'alias') # a dict of attributes keyed by node
nx.draw_networkx_labels(G, pos, node_labels)

edge_labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_nodes (G, pos, node_size=1200, node_color='red', alpha=0.9)
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)


plt.axis('off')
plt.show()
