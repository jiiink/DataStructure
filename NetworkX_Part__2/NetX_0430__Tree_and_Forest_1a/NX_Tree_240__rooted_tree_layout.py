#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
import numpy as np
import matplotlib.pyplot as plt

plt.figure(figsize=(12, 5))

np.random.seed(1111)
T = nx.random_tree(15)
nx.draw_networkx( T, pos=nx.drawing.nx_agraph.graphviz_layout(T, prog='dot'))

plt.axis('off')
plt.show()
