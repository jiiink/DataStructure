#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-06-09
#-------------------------------------------------------------------------------


import networkx as nx
import matplotlib.pyplot as plt

fig = plt.figure(figsize=(10,8)) # 8인치 by 8인치

N = 12
M = 9
G=nx.grid_2d_graph(N,M)


G.add_edge( (0,0),(N-1,0) )

pos = dict( (n, n) for n in G.nodes() ) # pos=(위치, node 이름)
# vlabels = dict( ((i, j), i * 10 + j) for i, j in G.nodes() ) # 사용안함.
vlabels = dict( ((i, j), str(i)+","+str(j) ) for i, j in G.nodes() )
nx.draw_networkx(G, pos=pos, node_size=800, node_color='coral', \
                 edge_color='blue', labels=vlabels)

plt.title("Solid Graph Drawing")
plt.axis('off')
plt.show()