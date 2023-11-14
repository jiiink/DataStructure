#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------


##is_weakly_connected(G)
##    Test directed graph for weak connectivity.
##
##number_weakly_connected_components(G)
##    Returns the number of weakly connected components in G.
##
##weakly_connected_components(G)
##    Generate weakly connected components of G.


import networkx as nx
import matplotlib.pyplot as plt

G = nx.DiGraph()
G.nodes( list("ABCDEFGZ") )
G.add_edges_from(
    [('A', 'B'), ('B', 'C'), ('C', 'D'), ('D', 'A'),
     ('E', 'B'), ('F', 'G'),  ('G', 'E'),('E', 'A'),
     ('A', 'Z')])

print( "weak 1> ", nx.is_weakly_connected(G)   )
print( "weak 2> ", nx.number_weakly_connected_components(G)   )

scompo =  nx.weakly_connected_components(G)
for w in scompo :
    print("weak 3> ",w)


pos = nx.draw(G, with_labels=True, node_color='g', \
              font_color='w', node_size=700 )

plt.axis('off')
plt.draw()
plt.show()