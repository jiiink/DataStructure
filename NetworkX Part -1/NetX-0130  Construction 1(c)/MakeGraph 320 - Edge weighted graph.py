

import networkx as nx
import pylab


G = nx.Graph()
G.add_edge(1, 2, weight= 13)
G.add_edge(2, 3, weight= 32)
G.add_edge(1, 3, weight=  5)
G.add_edge(1, 4, weight=  7)
G.add_edge(2, 5, weight= 14)
G.add_edge(1, 5, weight= 31)
G.add_weighted_edges_from([(0, 1, 3.0), (1, 6, 7.5)])

pos=nx.spring_layout(G)

# version 1 # use default edge labels
##pylab.figure(1)
##nx.draw(G,pos, node_size=800, node_color='y')
##nx.draw_networkx_edge_labels(G,pos )
##nx.draw_networkx_labels(G,pos )
###nx.draw_networkx_edge_labels(G,pos,edge_labels=s)

# version 2 -  specifiy edge labels explicitly
pylab.figure(2)
nx.draw(G,pos, node_size=800, node_color='g')

edge_labels=dict([((u,v,),d['weight'])
             for u,v,d in G.edges(data=True)])

nx.draw_networkx_edge_labels(G,pos,edge_labels=edge_labels)

# show graphs
pylab.show()
