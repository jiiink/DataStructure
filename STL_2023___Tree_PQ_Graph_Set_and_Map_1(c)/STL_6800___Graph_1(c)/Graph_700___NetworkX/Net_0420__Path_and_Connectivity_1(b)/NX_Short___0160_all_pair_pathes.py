
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.path_graph(6)
G.add_edge(1,4)
G.add_edge(1,5)
G.add_node(7)
G.add_edge(2,7)

path = dict( nx.all_pairs_shortest_path( G ))

for i,w in enumerate(path) :
    print(i, "=", w)

print( "path[0][4]=", path[0][4])


allshort = dict(nx.all_pairs_shortest_path_length(G))
print( f'all pair shortest path={allshort}')

print('node 1에서 모든 점까지의 shortest path')
for node in [0, 1, 2, 3, 4, 5]:
    print(f'1 - {node}: leng={allshort[1][node]}')
