
import networkx as nx
import matplotlib.pyplot as plt
import numpy

s = 4
G = nx.grid_graph(dim=[5,s])


s=(0,0) ; t=(0,4)
outs = [(2,2)]
G.remove_nodes_from( outs )

print(f" G.nodes() ={ G.nodes }")
#outs = (1,2)
#G.remove_node( outs )

pos=nx.spectral_layout(G)
pos=nx.kamada_kawai_layout(G)

ncon= nx.node_connectivity(G)
print("> Node connectivity of G=", ncon )
ncon= nx.edge_connectivity(G)
print("> Edge connectivity of G=", ncon )

avgcon= nx.average_node_connectivity(G)
print("> Average connectivity of G=", avgcon )

cutedge = nx.minimum_edge_cut(G)
print("> Minimum edge cut set of G=", cutedge )

cutedge = nx.minimum_edge_cut(G, s=(1,2), t=(2,1))
for i,w in enumerate(cutedge):
    print(f">  {i}: edge cut between s(1,2) and t(2,1) = {w}" )

# Drawing Code
nx.draw_networkx_nodes(G, pos, node_size= 1200, node_color='b', alpha=0.5)
nx.draw_networkx_labels(G,pos,font_size=11, font_color='white', font_family='sans-serif')
nx.draw_networkx_edges(G, pos, width=2)

plt.axis('off')
plt.show()





