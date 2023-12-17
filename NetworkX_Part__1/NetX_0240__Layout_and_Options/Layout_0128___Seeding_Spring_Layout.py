
import matplotlib.pyplot as plt
import networkx as nx
import numpy

G=nx.Graph()

G.add_edge('a','b',weight=0.6)
G.add_edge('a','c',weight=0.2)
G.add_edge('c','d',weight=0.1)
G.add_edge('c','e',weight=0.7)
G.add_edge('c','f',weight=0.9)
G.add_edge('a','d',weight=0.3)

elarge=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] >0.5]
esmall=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] <=0.5]

print( "networkx version=", nx.__version__ )
print( "numpy version=", numpy.__version__ )

# layout이나 draw할 때 seed를 준다.

pos=nx.spring_layout(G, seed=1234 ) # initialization for random seeding

# nodes
nx.draw_networkx_nodes(G,pos,node_color='g', node_size=700)

# edges
nx.draw_networkx_edges(G,pos,edgelist=elarge, width=3)
nx.draw_networkx_edges(G,pos,edgelist=esmall, width=3,alpha=0.5,\
                       edge_color='b',style='dashed')

# labels
nx.draw_networkx_labels(G,pos,font_size=20, font_color='w', \
                        font_family='sans-serif')

plt.axis('off')
plt.show() #