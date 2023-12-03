#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-23
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

B = nx.Graph()
B.add_nodes_from([1,2,3,4], bipartite=0) # Add the node attribute "bipartite"
B.add_nodes_from(['a','b','c'], bipartite=1)
B.add_edges_from([(1,'a'), (1,'b'), (2,'b'), (2,'c'), (3,'c'), (4,'a')])

# Separate by group
l, r = nx.bipartite.sets(B)
pos = {}

# Update position for node from each group
pos.update((node, (1, index)) for index, node in enumerate(l))
pos.update((node, (2, index)) for index, node in enumerate(r))

labels=[]
nx.draw_networkx_edges(B, pos, width=2)
nx.draw_networkx_nodes (B, pos, node_size=800, node_color='g')
nx.draw_networkx_labels(B, pos, font_size=15, \
            font_color='white', font_family='sans-serif')
#nx.draw(B, pos=pos)
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림
