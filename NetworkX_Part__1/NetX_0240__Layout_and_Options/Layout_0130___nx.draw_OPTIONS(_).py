
import matplotlib.pyplot as plt
import networkx as nx
import pylab as plt #import Matplotlibplotting interface

g = nx.watts_strogatz_graph(7, 5, 0.06)


nx.draw(g, node_size=700, node_color='y', edge_color='gray', width=2 )
# main mamory에 그림을 그려 넣음
plt.show( )
# 화면에 뿌림

nx.draw_random(g, node_size=700, node_color='y',  edge_color='green', width=2)
plt.show( )

nx.draw_circular(g, node_size=700, node_color='y', edge_color='tomato', width=2)
plt.show( )

nx.draw_spectral(g, node_size=700, node_color='y', edge_color='orange', width=2)
plt.show( )