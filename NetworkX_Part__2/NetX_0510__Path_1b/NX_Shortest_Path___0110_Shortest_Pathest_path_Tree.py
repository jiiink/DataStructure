#-------------------------------------------------------------------------------
# Purpose:     Zoh's Work     "過猶不及"
#-------------------------------------------------------------------------------
import matplotlib.pyplot as plt
import networkx as nx
import itertools

G = nx.Graph()

G.add_edge("a", "b", weight= 11)
G.add_edge("a", "c", weight= 8)
G.add_edge("f", "e", weight= 7)
G.add_edge("c", "d", weight= 8)
G.add_edge("c", "e", weight= 5)
G.add_edge("c", "f", weight= 9)
G.add_edge("a", "d", weight=11)
G.add_edge("c", "g", weight= 9)
G.add_edge("a", "g", weight=12)
G.add_edge("b", "f", weight= 6)
G.add_edge("a", "d", weight= 9)
G.add_edge("d", "f", weight= 5)

elarge = [(u, v) for (u, v, d) in G.edges(data=True) if d["weight"] > 10]
esmall = [(u, v) for (u, v, d) in G.edges(data=True) if d["weight"] <= 10]

pos = nx.spring_layout(G, seed=7)  # positions for all nodes - seed for reproducibility


nx.draw_networkx_nodes(G, pos, node_size=700, alpha=0.6) # nodes
nx.draw_networkx_edges(G, pos,  width=3, alpha=0.4) # edges
##nx.draw_networkx_edges(
##    G, pos, edgelist=esmall, width=3, alpha=0.5, edge_color="b", style="dashed"
##)

# node labels
nx.draw_networkx_labels(G, pos, font_size=20, font_family="sans-serif")
# edge weight labels
edge_labels = nx.get_edge_attributes(G, "weight")
nx.draw_networkx_edge_labels(G, pos, edge_labels, font_size=10, font_color='tomato')

for u, v in itertools.combinations(G, 2):
    spath = nx.shortest_path(G, u, v, weight='weight')
    sleng = nx.shortest_path_length(G, u, v, weight='weight')
    print(f"> Spath {u} to {v}= {spath}, Length = {sleng}")

##ax = plt.gca()
##ax.margins(0.08)
plt.axis("off")
plt.tight_layout()
plt.show()