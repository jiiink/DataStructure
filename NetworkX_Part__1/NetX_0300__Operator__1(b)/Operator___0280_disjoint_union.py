
# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

G1 = nx.cycle_graph(4)
G2 = nx.wheel_graph(5)
G3 = nx.path_graph(3)
G4 = nx.complete_graph(3)
G5 = nx.random_tree(6)

U = [ G1, G2, G3, G4, G5 ]

for i in range(len(U)-1) :

    Gc  = nx.disjoint_union( U[i], U[i+1])
    pos = nx.kamada_kawai_layout(Gc)  # 위치를 지정한다.

    nx.draw_networkx_nodes (Gc,   pos, node_color='gold', node_size= 800) # 그리려는 그래프의 속성을 설정해 준다
    nx.draw_networkx_edges (Gc,   pos, width=2, edge_color='gray')
    nx.draw_networkx_labels(Gc,pos, font_color='black', font_size=14,font_family='Pristina')

    plt.axis('off')
    plt.show()