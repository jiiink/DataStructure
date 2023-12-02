
# Name:        module1
# Author:      Zoh

import networkx as nx
import pylab


G = nx.Graph()
G.add_edge(1, 2, weight=-23, mytype="A" )
G.add_edge(2, 3, weight=32, mytype="B" )
G.add_edge(1, 3, weight=4, mytype="C" )
G.add_edge(3, 4, weight=15, mytype="X" )
G.add_edge(2, 5, weight=4, mytype="PNU" )
G.add_edge(1, 5, weight=7, mytype="W" )
G.add_edge(3, 6, weight=14, mytype="M" )

pos=nx.circular_layout(G)

# version 1
pylab.figure(1)
nx.draw(G,pos)
# use default edge labels
nx.draw_networkx_edge_labels(G,pos)

# version 2
pylab.figure(2)
nx.draw(G,pos)
# specifiy edge labels explicitly
edge_labels=dict([((u,v,),d['mytype']+"?" ) for u,v,d in G.edges(data=True)])

nx.draw_networkx_edge_labels(G,pos,edge_labels=edge_labels)

# show graphs
pylab.show()
