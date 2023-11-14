
import networkx as nx
import matplotlib.pyplot as plt
import math


G = nx.Graph()  # Creat empty graph
V= [1,2,5,6,7,9,10]
E = [(1,2), (2,5), (1,5), (6,7), (6,9), (6,10), (7,5), (7,1), (9,10) ]

G.add_nodes_from( V )   # A list of nodes
G.add_edges_from( E )


pos = nx.spring_layout(G, seed=2020)     # 위치를 지정한다.


nx.draw_networkx_nodes(G,pos,node_color='orange', node_size=600) # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges(G,pos,width=2)
nx.draw_networkx_labels(G,pos,font_color='black', font_size=11,font_family='sans-serif')

Bcom = nx.biconnected_components(G)
print(f" > is binonnected of G = { nx.is_biconnected(G)}")
for w in Bcom :
    print(f' 2-연결성분 = {w}')



plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



