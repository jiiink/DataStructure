
import matplotlib.pyplot as plt
import networkx as nx


G = nx.Graph()

edges = [[1,3], [1,4], [1,5], [5,7], [5,8] ,[5,9],
         [9,11], [9,12], [9,13], [2,4], [6,8] ,[10,12], [2,8], [8,12]]

G = nx.Graph()
G.add_edges_from(edges)


pos = {node:(node,0) for node in G.nodes()}

plt.figure(figsize=(15,5))
ax = plt.gca()
for edge in edges:
    source, target = edge
    rad = 0.8
    rad = rad if source%2 else -rad  # 두 노드가 모두 짝수이면 방향은 아래로..
    ax.annotate("",
                xy=pos[source],
                xytext=pos[target],
                arrowprops=dict(arrowstyle="-", color="tomato",
                                connectionstyle=f"arc3,rad={rad}",
                                alpha    = 0.4,
                                linewidth= 3.5))

nx.draw_networkx_nodes (G, pos= pos, node_size=1000, node_color='purple', alpha=0.8 )
nx.draw_networkx_labels(G, pos= pos, font_color='white', font_size=20 )
plt.box(False)
plt.show()