#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-23
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

B = nx.Graph()
plt.figure(figsize=(10,8)) # (가로, 세로) 크기, 단위는 인치


B.add_nodes_from([1,2,3,4], bipartite=0) # Add the node attribute "bipartite"
B.add_nodes_from(['abc','bcd','cef'], bipartite=1)
B.add_edges_from([(1,'abc'), (1,'bcd'), (2,'bcd'), \
                  (2,'cef'), (3,'cef'), (4,'abc')])

top = nx.bipartite.sets(B)[0]
pos = nx.bipartite_layout(B, top)
nx.draw(B, pos=pos, with_labels=True, node_size= 1400 , font_color="white", \
        font_size= 14 , \
        node_color=['green','green','green','green','orange','orange','red'])

plt.show()