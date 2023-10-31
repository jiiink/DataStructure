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
     ('A', 'Z')])



#pos = nx.spectral_layout(G)
pos = nx.spring_layout(G)
pos = nx.kamada_kawai_layout(G)
nx.draw_networkx_nodes(G, pos, node_size = 700, node_color='lightgreen')
nx.draw_networkx_labels(G, pos,font_size=12, font_color='k' )
nx.draw_networkx_edges(G, pos, edge_color='tomato', arrowsize=20, arrowstyle='fancy')

print( "Is G strongly connected ?", nx.is_strongly_connected(G)   )
print( "# of strong component=", nx.number_strongly_connected_components(G)   )
scompo =  nx.strongly_connected_components(G)
for (i,w) in enumerate(scompo) :
    print(f' Component {i}, {w}' )




##is_strongly_connected(G) :
##    Test directed graph for strong connectivity.
##
##number_strongly_connected_components(G) :
##    Returns number of strongly connected components in graph.
##
##strongly_connected_components(G) :
##    Generate nodes in strongly connected components of graph.
##
##strongly_connected_components_recursive(G) :
##    Generate nodes in strongly connected components of graph.
##
##kosaraju_strongly_connected_components(G[, …]):
##    Generate nodes in strongly connected components of graph.
##
##condensation(G[, scc]) :
##    Returns the condensation of G.

plt.axis('off')
plt.show()