import networkx as nx
import networkx.algorithms.isomorphism as iso

# For multidigraphs G1 and G2, using ‘fill’ node attribute (default: ‘’)

G1 = nx.MultiDiGraph()
G2 = nx.MultiDiGraph()

G1.add_nodes_from([1, 2, 3], fill="red")
G2.add_nodes_from([10, 20, 30, 40], fill="red")

nx.add_path(G1, [1, 2, 3, 4], weight=3, linewidth=2.5)
nx.add_path(G2, [10, 20, 30, 40], weight=3)

nm = iso.categorical_node_match("fill", "red")
ans3 = nx.is_isomorphic(G1, G2, node_match=nm)
ans4 = nx.is_isomorphic(G1, G2)


print(f"ans3= {ans3}, ans4= {ans4}")

#For multidigraphs G1 and G2, using ‘weight’ edge attribute (default: 7)


G1.add_edge(1, 2, weight=7)
G2.add_edge(10, 20)

em = iso.numerical_multiedge_match("weight", 7, rtol=1e-6)
ans5 = nx.is_isomorphic(G1, G2, edge_match=em)
print(f"ans5= {ans5}")

