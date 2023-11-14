
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.Graph()                  # or DiGraph, MultiGraph, MultiDiGraph, etc

G.add_nodes_from([0,1,2,3,4,5,6, 7, 8,9])
G.add_edges_from([(0, 1), (0,2), (0, 3), (0,8), (2,4),(2,3), \
                   (3,4), (4,5),(3,5),(5,6), (7,8), (7,9), (2,7)]) # using a list of edge tuples

G.add_edge( 0,5 )
print(("Nodes of graph: ", G.nodes()))
print(("Edges of graph: ", G.edges()))

pos = nx.spring_layout(G)     # 위치를 지정한다.
nx.draw_networkx_nodes(G,pos, node_size= 750, node_color="y")
nx.draw_networkx_edges(G,pos, width=1)
nx.draw_networkx_labels(G,pos,font_color='b',font_size=13,font_family='sans-serif')
plt.axis('off')
plt.show() # display


G.remove_node( 4 )
G.remove_edge( 5,3 )  # Set으로 지우려면 G.remoce_nodes_from) ( [   ] ..)
print(("After removing: Nodes of graph: ", G.nodes()))
print(("After removing: Edges of graph: ", G.edges()))
pos = nx.spring_layout(G)
plt.title(" > After removing Edges and Nodes: < ")
nx.draw_networkx_nodes(G,pos, node_size= 800, node_color="tomato")
nx.draw_networkx_edges(G,pos,width=2)
nx.draw_networkx_labels(G,pos,font_color='w',font_size=10,font_family='sans-serif')
#plt.savefig("simple_path.png") # save as png
plt.axis('off')
plt.show() # display


