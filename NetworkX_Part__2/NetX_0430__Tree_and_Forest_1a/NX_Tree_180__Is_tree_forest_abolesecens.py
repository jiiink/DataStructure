"""
is_tree(G): Returns True if G is a tree.

is_forest(G) : Returns True if G is a forest.

is_arborescence(G): Returns True if G is an arborescence.
                   An arborescence is a directed tree with maximum in-degree equal to 1.

is_branching(G): Returns True if G is a branching.
                A branching is a directed forest with
                maximum in-degree equal to 1.
"""

import networkx as nx

G1 = nx.path_graph(6)
G2 = nx.star_graph(7)
G3 = G2
G3.add_edge( 1,5 )

print( nx.is_tree(G1) )
print( nx.is_tree(G2) )
print( nx.is_tree(G3) )