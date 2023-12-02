
import networkx as nx
import matplotlib.pyplot as plt
import numpy

s = 4
G = nx.grid_graph(dim=[s,s])


pos=nx.spectral_layout(G)

s=(1,1) ; t=(3,2)

#edj_list = list(nx.edge_disjoint_paths(G, s, t, flow_func=shortest_augmenting_path))
edj_list = list(nx.edge_disjoint_paths(G, s, t))

print(">> edge disjoint path from [", s, "] to [", t, "]")
for i,w in enumerate(edj_list) :
    print("path=",i+1, w)


#edj_list = list(nx.node_disjoint_paths(G, s, t, flow_func=shortest_augmenting_path))
edj_list = list(nx.edge_disjoint_paths(G, s, t))

print("\n\n>> node disjoint path from [", s, "] to [", t, "]")
for i,w in enumerate(edj_list) :
    print("path=",i+1, w)


avgcon= nx.average_node_connectivity(G)
print("Average connectivity of G=", avgcon )

ncon= nx.node_connectivity(G)
print("Node connectivity of G=", ncon )
ncon= nx.edge_connectivity(G)
print("Edge connectivity of G=", ncon )

cutedge = nx.minimum_edge_cut(G)
print("Minimum edge cut set of G=", cutedge )

cutedge = nx.minimum_edge_cut(G, s=(1,2), t=(2,1))
print("Minimum edge cut for (0,3), (3,0) =", cutedge )

# Drawing Code
nx.draw_networkx_nodes(G, pos, node_size=800, node_color='b')
nx.draw_networkx_labels(G,pos,font_size=11, font_color='white', font_family='sans-serif')
nx.draw_networkx_edges(G, pos, width=2)

plt.axis('off')
plt.show()





