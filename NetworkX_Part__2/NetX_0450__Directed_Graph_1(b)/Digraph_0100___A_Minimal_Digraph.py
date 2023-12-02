

import networkx as nx
import matplotlib.pyplot as plt


G = nx.DiGraph()
G.nodes( list("ABCDEFGZ") )
G.add_edges_from(
    [('A', 'F'), ('B', 'C'), ('C', 'D'), ('D', 'A'),
     ('E', 'F'), ('F', 'G'),  ('G', 'E'),('E', 'A'),
     ('A', 'Z'),('F','B')] )


mypos = nx.spring_layout(G, seed= 143, iterations=100)
mypos = nx.kamada_kawai_layout( G )
nx.draw_networkx_labels(G, mypos,font_size=20, font_color='k', font_family='sans-serif')
nx.draw(G, pos=mypos, node_color='gold', \
           width=2, edge_color='orange', node_size=1000 )


plt.title(" > Minimal Directed Graph < ")
plt.axis('off')
plt.draw()
plt.show()