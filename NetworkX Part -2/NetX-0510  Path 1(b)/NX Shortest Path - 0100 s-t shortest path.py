#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
# https://networkx.github.io/documentation/stable/reference/algorithms/generated/networkx.algorithms.shortest_paths.generic.shortest_path.html#networkx.algorithms.shortest_paths.generic.shortest_path
import matplotlib.pyplot as plt
import networkx as nx


G = nx.path_graph(6)
G.add_edge(1,4)
G.add_edge(1,5)
G.add_node(7)
G.add_edge(2,7)

print("0-4:", nx.shortest_path(G, source=0, target=4))
#[0, 1, 2, 3, 4]

p = nx.shortest_path(G, source=1) # target not specified
print("1-4:", p[4])

p = nx.shortest_path(G, target=4) # source not specified
print("3-4:", p[3])


p = nx.shortest_path(G) # source, target not specified
print("2-5:", p[2][5])

