
import networkx as nx
import matplotlib.pyplot as plt
import math

G = nx.Graph(day="Friday")
print (G.graph)


G.add_edges_from([(0, 1), (1, 2)]) # using a list of edge tuples
e = zip(range(0, 3), range(1, 4))
G.add_edges_from(e) # Add the path graph 0-1-2-3

G.add_edges_from([(1, 2), (2, 3)], weight=3)
G.add_edges_from([(3, 4), (1, 4)], label='WN2898')



nx.draw(G, node_size=800, node_color='coral', with_labels=True, font_color='w')  # network을 그림.

plt.title("A Simple Graph")
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림

