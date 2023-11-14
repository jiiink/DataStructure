#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt
import random

myseed=345

T = nx.random_tree(25, seed= myseed)
#pos=nx.circular_layout( g )
pos = nx.draw( T,  with_labels=True, node_color='tomato', \
              font_color='k', edge_color='black', width=1,  node_size=400 )

print( "Is it a tree? " ,  nx.is_tree(T) )
print( "Is it a forest? " ,nx.is_forest(T) )

plt.draw( )
plt.show()