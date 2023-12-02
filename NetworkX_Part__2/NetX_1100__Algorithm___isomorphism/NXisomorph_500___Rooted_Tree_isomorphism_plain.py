import NX_treeiso
import networkx as nx

# Create the first rooted tree
T1 = nx.DiGraph()
T1.add_edges_from([(0, 1), (0, 2), (1, 3), (1, 4), (2, 5), (2, 6)])

# Create the second rooted tree
T2 = nx.DiGraph()
T2.add_edges_from([(0, 1), (0, 2), (1, 3), (1, 4), (2, 5), (2, 6)])

# Check if the two trees are isomorphic
isomorphic = nx.is_isomorphic(T1, T2, lambda n1, n2: T1.out_degree(n1) == T2.out_degree(n2))

if isomorphic:
    print("The two trees are isomorphic.")
else:
    print("The two trees are not isomorphic.")