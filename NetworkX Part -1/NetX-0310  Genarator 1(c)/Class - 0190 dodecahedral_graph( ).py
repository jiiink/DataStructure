import matplotlib.pyplot as plt
import networkx as nx

G = nx.dodecahedral_graph()
nx.draw(G, node_size=800, node_color='tomato', \
        font_color='w', with_labels=True)  # networkx draw()
plt.show()  # pyplot draw()

