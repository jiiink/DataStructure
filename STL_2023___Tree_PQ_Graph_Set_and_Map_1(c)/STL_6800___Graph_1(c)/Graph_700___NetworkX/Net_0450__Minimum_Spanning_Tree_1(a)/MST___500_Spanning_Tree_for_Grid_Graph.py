#-------------------------------------------------------------------------------
# Purpose:     2022 Zoh's Work     "過猶不及" 메롱..
# Author:      Cho
# Created:     2022-08-01
#-------------------------------------------------------------------------------

from __future__ import print_function, division
import numpy
from numpy import *
import networkx as nx
from networkx import *
import matplotlib.pyplot as plt

N=12
G=nx.grid_2d_graph(N,N)
pos = dict( (n, n) for n in G.nodes() )
labels = dict( ((i, j), i + (N-1-j) * N ) for i, j in G.nodes() )
nx.relabel_nodes(G,labels,False)
inds=labels.keys()
vals=labels.values()

sorted( inds )
sorted( vals )
pos2=dict(zip(vals,inds))

#nx.draw_networkx(G, pos=pos2, with_labels=False, node_size = 15)
#nx.draw_networkx(G, pos=pos2, with_labels=True, node_size = 15)

T=nx.minimum_spanning_tree(G)
plt.figure()
nx.draw_networkx(T, pos=pos2, with_labels=False, node_size = 35)

plt.axis('off')
plt.show()