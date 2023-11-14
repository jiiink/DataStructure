#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
# https://networkx.github.io/documentation/stable/reference/algorithms/generated/networkx.algorithms.shortest_paths.generic.shortest_path.html#networkx.algorithms.shortest_paths.generic.shortest_path
import matplotlib.pyplot as plt
import networkx as nx


G = nx.path_graph(8)
G.add_edge(1,4, weight=  2)  # weight가 없으면 default로 1이다.
G.add_edge(1,2, weight= 10)
G.add_edge(3,2, weight= 11)
G.add_edge(4,3, weight=  1)
G.add_edge(2,6, weight=  6)
G.add_edge(1,3, weight= 96)
G.add_node(9)
G.add_edge(3,9, weight= 12)

print(" weighted 0-4:", nx.shortest_path(G, source=0, target= 4, weight='weight'))
Ld = nx.shortest_path_length(G, source=0, target=4, weight='weight' )
print(f" weighted short[0,4],  length = {Ld}" )
print(" weighted 0-7:", nx.shortest_path(G, source=0, target= 7, weight='weight'))
print(" 1-3:", nx.shortest_path(G, source=1, target= 3, weight='weight'))

p = nx.shortest_path(G, source=1) # target not specified
print(" from 1 to all :", p[4])

p = nx.shortest_path(G, target=4) # source not specified
print(" from all to 3 :", p[3])


p = nx.shortest_path(G) # source, target not specified
print(" shortest_path [2][5]=", p[2][5])

