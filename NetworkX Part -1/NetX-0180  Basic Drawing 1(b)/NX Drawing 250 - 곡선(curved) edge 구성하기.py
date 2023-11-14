import matplotlib.pyplot as plt
import networkx as nx


G = nx.Graph()
# add edges
G.add_edge("a", "b", weight=0.6)
G.add_edge("a", "c", weight=0.2)
G.add_edge("c", "d", weight=0.1)
G.add_edge("c", "e", weight=0.7)
G.add_edge("c", "f", weight=0.9)
G.add_edge("a", "d", weight=0.3)

elarge=[ ("a", "b"),("c", "f") ]

plt.figure(figsize=(15,8))
pos = nx.circular_layout(G)  # positions for all nodes
ax = plt.gca()

for edge in G.edges():
    source, target = edge
    rad = 0.2
    c = edge in elarge
    arrowprops=dict(arrowstyle="-",
                    color='tomato' if c else 'blue',
                    connectionstyle=f"arc3,rad={rad}",
                    linestyle= '-' if c else '--',
                    alpha=0.6,
                    linewidth=5)
    ax.annotate("",
                xy=pos[source],
                xytext=pos[target],
                arrowprops=arrowprops
               )
# nodes
nx.draw_networkx_nodes(G, pos, node_size=700, node_color='black')
# labels
nx.draw_networkx_labels(G, pos, font_size=20,
                        font_family="sans-serif",
                        font_color ='white')

plt.title("  > Curved Edge Drawing < ")
plt.box(False)
plt.show()