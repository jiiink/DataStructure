# 실제 isomorphism function을 구체적으로 찾으로 때

"""
VF2++ Algorithm
An implementation of the VF2++ algorithm for Graph Isomorphism testing.

The simplest interface to use this module is to call:

vf2pp_is_isomorphic: to check whether two graphs are isomorphic.
vf2pp_isomorphism: to obtain the node mapping between two graphs,
   in case they are isomorphic.
vf2pp_all_isomorphisms: to generate all possible mappings between two graphs,
   if isomorphic.


"""


import networkx as nx
import networkx.algorithms.isomorphism as iso


G1 = nx.Graph()
G2 = nx.Graph()

nx.add_path(G1, [3,   5, 1,   6, 8 ],     weight=1)
nx.add_path(G2, [10, 20, 30, 40, 80],     weight=2)
G1.add_edge( 3, 8 )
G2.add_edge( 10,80)


ans1 = nx.vf2pp_is_isomorphic(G1, G2, node_label=None)
print(f"> ans1 = {ans1}")

ans2 = nx.vf2pp_isomorphism(G1, G2, node_label=None)
print(f"> ans2 = {ans2}")

ans3 =  nx.vf2pp_all_isomorphisms(G1, G2, node_label=None)
for w in ans3 :
    print(f"> ans3.w = {w}")
