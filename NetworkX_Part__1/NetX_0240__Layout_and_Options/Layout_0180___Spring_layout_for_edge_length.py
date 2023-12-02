#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-21
#-------------------------------------------------------------------------------

import networkx as nx
import pylab as plt

G = nx.Graph()
G.add_edges_from([(1,2, {'myweight':20}), (2,3,{'myweight':23}),
                  (1,4,{'myweight':8}), (2,4,{'myweight':50})])

initialpos = {1:(0,0), 2:(0,3), 3:(0,-1), 4:(5,5)}
pos = nx.spring_layout(G, weight='myweight',  iterations=100)
#pos = nx.spring_layout(G, weight='myweight', pos = initialpos, iterations=100)

edge_labels=dict([((u,v,),d['myweight'])
                  for u,v,d in G.edges(data=True)])


nx.draw_networkx_nodes (G,pos, node_color='gold', node_size= 800)
nx.draw_networkx_edges (G,pos, edge_color='tomato', width=3)
nx.draw_networkx_labels(G,pos, font_color='black', font_size=13,)
nx.draw_networkx_edge_labels(G, pos, font_size=11, edge_labels=edge_labels)
#nx.draw_networkx(G,pos)


plt.axis('off')
plt.show( )