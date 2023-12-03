#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import networkx as nx
import numpy as np
import matplotlib.pyplot as plt
import pylab

G = nx.DiGraph()

G.add_edges_from([('A', 'B'),('C','A'),('G','D')], weight=1)
G.add_edges_from([('D','A'),('D','E'),('B','D'),('D','E')], weight=2)
G.add_edges_from([('B','C'),('E','F')], weight=3)
G.add_edges_from([('C','F')], weight=4)
G.add_edges_from([('B','E')], weight=9)


val_map = {'A': 1.0,'D': 0.5714285714285714, 'H': 0.0}

values = [val_map.get(node, 0.45) for node in G.nodes()]
edge_labels=dict([((u,v,),d['weight'])
                 for u,v,d in G.edges(data=True)])

red_edges = [('C','D'),('D','A')]
edge_colors = ['gray' if not edge in red_edges else 'red' for edge in G.edges()]

pos=nx.spring_layout(G, seed= 99, iterations= 500 )
pos=nx.circular_layout( G )
nx.draw_networkx_edge_labels(G,pos,edge_labels=edge_labels)
nx.draw( G,pos, node_color = values, \
         edge_color=edge_colors,edge_cmap=plt.cm.Reds )
nx.draw_networkx_labels(G,pos,font_size=20, font_color='white', font_family='sans-serif')
pylab.show()