import networkx as nx
import networkx.algorithms.isomorphism as iso
import NX_treeiso


G1 = nx.Graph()
G2 = nx.Graph()

nx.add_path(G1, [3,   5, 1,   6, 8 ])
nx.add_path(G2, [10, 20, 30, 40, 80])


ans1 = NX_treeiso.tree_isomorphism(G1, G2)
print(f"> ans1 = {ans1}")



