
import networkx as nx
import matplotlib.pyplot as plt



g = nx.watts_strogatz_graph(8, 5, 0.1)

plt.title("Plain Layout")
nx.draw(g, node_size=700, node_color='y', edge_color='gray', width=2 )
plt.show( )

plt.title("Random Layout")
nx.draw_random(g, node_size=700, node_color='r', edge_color='gray', width=2)
plt.show( )


plt.title("Circular Layout")
nx.draw_circular(g, node_size=700, node_color='b', edge_color='gray', width=2)
plt.show( )


plt.title("Spectral Layout")
nx.draw_spectral(g, node_size=700, node_color='g', edge_color='gray', width=2)
plt.show( )