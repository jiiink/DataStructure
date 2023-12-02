
import matplotlib.pyplot as plt
import networkx as nx
import numpy



G = nx.random_tree(13, seed=100 )
print("G.nodes=", G.nodes())
print("G.edges=", G.edges())

top = nx.bipartite.sets(G)[0]
pos = nx.bipartite_layout(G, top)


# nodes
nx.draw_networkx_nodes(G,pos,node_color='g', node_size=700)

# edges
nx.draw_networkx_edges(G,pos, width=3,alpha=0.5,edge_color='b',style='dashed')

# labels
nx.draw_networkx_labels(G,pos,font_size=20, font_color='w', font_family='sans-serif')

plt.axis('off')
plt.show() #