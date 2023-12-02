#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt


G = nx.DiGraph()
G.nodes( list("ABCDEFGZ") )
G.add_edges_from(
    [('A', 'B'), ('B', 'C'), ('C', 'D'), ('D', 'A'),
     ('E', 'F'), ('F', 'G'),  ('G', 'E'),('E', 'A'),
     ('A', 'Z'),('F','B')] )


pos = nx.draw(G, with_labels=True, node_color='tomato', \
              font_color='w', node_size=700, seed=1234 )

plt.axis('off')
plt.draw()
plt.show()