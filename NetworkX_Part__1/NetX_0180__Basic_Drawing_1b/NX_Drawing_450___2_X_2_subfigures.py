
import networkx as nx
import numpy as np
import matplotlib.pyplot as plt

options1 = {
    'node_color': 'black',
    'node_size': 100,
    'edge_color': 'yellow',
    'width': 2, }

options2 = {
    'node_color': 'tomato',
    'node_size': 200,
    'width': 1, }

G = nx.petersen_graph()
nx.draw_random(G,   **options1)
plt.subplot(221)

nx.draw(G, with_labels=True, font_weight='bold', **options2)
plt.subplot(222)

nx.draw_shell(G, nlist=[range(5, 10), range(5)], with_labels=True, font_weight='bold')
plt.subplot(223)

nx.draw_random(G,   **options1)
plt.subplot(224)
nx.draw_random(G,   **options2)


##G2 = nx.dodecahedral_graph()
##shells = [[2, 3, 4, 5, 6], [8, 1, 0, 19, 18, 17, 16, 15, 14, 7], [9, 10, 11, 12, 13]]
##
##
##
##plt.subplot(221)
##
##nx.draw_random(G,   **options1)
##plt.subplot(222)
##
##nx.draw_circular(G, **options2)
##plt.subplot(223)
##
##nx.draw_spectral(G, **options1)
##plt.subplot(224)
##
##nx.draw_shell(G, nlist=[range(5,10), range(5)], **options2)




plt.show()
