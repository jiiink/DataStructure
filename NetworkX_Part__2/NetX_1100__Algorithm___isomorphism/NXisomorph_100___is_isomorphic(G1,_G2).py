import networkx as nx
import networkx.algorithms.isomorphism as iso


G1 = nx.DiGraph()
G2 = nx.DiGraph()

nx.add_path(G1, [1,   2, 3,   4],     weight=1)
nx.add_path(G2, [10, 20, 30, 40],     weight=2)

em = iso.numerical_edge_match("weight", 1)
ans1 = nx.is_isomorphic(G1, G2)                # no weights considered

ans2 = nx.is_isomorphic(G1, G2, edge_match=em)  # match weights


print(f"ans1= {ans1}, ans2= {ans2}")
