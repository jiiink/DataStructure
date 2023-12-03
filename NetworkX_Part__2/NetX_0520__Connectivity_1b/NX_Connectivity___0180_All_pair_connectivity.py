
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.Graph()
G.add_nodes_from( [1, 2, 3, 4, 5, 7, 8, 9] )
G.add_edges_from( [(1,2), (1,8), (2,3), (3,4), (1,4), (2,7),
                   (3,5), (2,5), (4,6), (9,5), (9,3), (7,8)])

pos   = nx.kamada_kawai_layout(G )


All = nx.all_pairs_node_connectivity(G)

for w in All :
    print(f" start:{w} = { All[w] } " )



# Drawing Code
nx.draw_networkx_nodes(G, pos, node_size= 1200, node_color='b', alpha=0.5)
nx.draw_networkx_labels(G,pos,font_size=15, font_color='w', font_family='sans-serif')
nx.draw_networkx_edges(G, pos, width=2, alpha=0.3)

plt.axis('off')
plt.show()





