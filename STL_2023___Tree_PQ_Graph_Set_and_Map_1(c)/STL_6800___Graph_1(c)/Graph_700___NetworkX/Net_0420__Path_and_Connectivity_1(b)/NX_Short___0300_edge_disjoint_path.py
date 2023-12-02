
import networkx as nx
import matplotlib.pyplot as plt
import numpy


G = nx.icosahedral_graph()
#print("Edge size", G.size())  # no of edges
#print("Edge size", G.edges())  #  edges lists
#print("No of V", G.nodes())  #  vertex  lists

pos = nx.spring_layout(G, seed=1234, iterations=20)

s=1 ; t=6

edj_list = list(nx.edge_disjoint_paths(G, s, t))

print(">> edge disjoint path from [", s, "] to [", t, "]")
for i,w in enumerate(edj_list) :
    print("path=",i+1, w)


edj_list = list(nx.node_disjoint_paths(G, s, t))

print("\n\n>> node disjoint path from [", s, "] to [", t, "]")
for i,w in enumerate(edj_list) :
    print("path=",i+1, w)






# Drawing Code
nx.draw_networkx_nodes(G, pos, node_size=800, node_color='b')
nx.draw_networkx_labels(G,pos,font_size=15, font_color='white', font_family='sans-serif')
nx.draw_networkx_edges(G, pos, width=2)

plt.axis('off')
plt.show()





