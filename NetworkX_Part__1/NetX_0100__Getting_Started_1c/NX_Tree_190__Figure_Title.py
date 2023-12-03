#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt



plt.figure(figsize=(7,5))
ax = plt.gca()
ax.set_title('Random graph')
G = nx.fast_gnp_random_graph(15,0.2)
nx.draw(G,with_labels=True, node_color='lightgreen', ax=ax)
ax.axis('off')

plt.draw( )
plt.show()