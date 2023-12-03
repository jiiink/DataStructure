
# https://networkx.github.io/documentation/networkx-1.10/index.html


import networkx as nx
import matplotlib.pyplot as plot
import numpy

numpy.random.seed(111)
Gs  = nx.Graph()
Gd  = nx.DiGraph()
Gm  = nx.MultiGraph()
Gmd = nx.MultiDiGraph()

edgelist=[(1,2,0.4), (3,4,1.2), (1,3,0.3), (1,5,0.6), (2,4,1.0), (3,5,0.5)]
elist=[('a','b',5.0),('b','c',3.0),('a','c',1.0), \
       ('c','d',7.3), ('a', 'e', 4.0), ('a','f',1.0), ('c','f', 2.5), ('b','f', 5.1)]

Gs.add_weighted_edges_from(elist)
pos=nx.spring_layout(Gs, iterations=200 )
nx.draw(Gs, pos, font_color='w', font_size=14, edge_color='k',\
          with_labels=True, node_size=700)

plot.show()





