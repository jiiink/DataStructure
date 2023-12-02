#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
# https://networkx.github.io/documentation/stable/reference/algorithms/generated/networkx.algorithms.shortest_paths.generic.shortest_path.html#networkx.algorithms.shortest_paths.generic.shortest_path

import networkx as nx


G = nx.Graph( )
G.add_nodes_from( [1,2,3,4,5,6,7])

G.add_edge(1,4, weight=  2)  # weight가 없으면 default로 1이다.
G.add_edge(1,2, weight= 10)
G.add_edge(3,2, weight= 11)
G.add_edge(4,3, weight=  1)
G.add_edge(4,5, weight= 11)
G.add_edge(5,6, weight=  1)
G.add_edge(7,6, weight=  1)
G.add_edge(2,6, weight=  6)
G.add_edge(1,3, weight=  9)
G.add_edge(2,7, weight= 12)


Ld = nx.shortest_path_length( G, source=1, target=7, weight='weight' )
print(f" weighted short[1,7],  length = {Ld}" )

myPath =  [1,2,3,4,5]
dist = nx.path_weight( G, myPath, weight='weight' )
print(f" {dist=}")