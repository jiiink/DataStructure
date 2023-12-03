
# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

G1 = nx.cycle_graph(4)
G2 = nx.wheel_graph(5)
G3 = nx.path_graph(5)
G4 = nx.complete_graph(5)
G5 = nx.cartesian_product( G2, G3)

U = [ G1, G2, G3, G4, G5 ]

for Gw in U :

    Gc = nx.complement( Gw )
    pos = nx.kamada_kawai_layout(Gw)  # 위치를 지정한다.
    ComG = nx.complement(Gw)

    nx.draw_networkx_nodes (Gw,   pos, node_color='gold', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
    nx.draw_networkx_edges (Gw,   pos, width=2, edge_color='gray')
    nx.draw_networkx_edges (ComG, pos, width=1, edge_color='red')
    nx.draw_networkx_labels(Gw,pos, font_color='black', font_size=14,font_family='Pristina')

    plt.axis('off')
    plt.show()