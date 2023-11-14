import networkx as nx

G = nx.path_graph(5)  # or MultiGraph, etc
G.add_edge(2, 5, weight=5)

print(f"\n {G.edges()= } " )
print(f"\n {G.edges.data() = } " )

print(f"\n {G.edges.data('weight', default=1)= }")
print(f"\n {G.edges([0, 3])= } " )  # only edges from these nodes
print(f"\n {G.edges(0)= } " )
