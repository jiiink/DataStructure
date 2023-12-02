#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-17
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G = nx.path_graph(8)
E = nx.path_graph(30)

# two separate graphs
fig1 = plt.figure()
ax1 = fig1.add_subplot(111)
nx.draw(G, ax=ax1)

fig2 = plt.figure()
ax2 = fig2.add_subplot(111)
nx.draw(G, ax=ax2)

plt.show( )