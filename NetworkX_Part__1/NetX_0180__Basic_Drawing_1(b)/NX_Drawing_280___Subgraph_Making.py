#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt


U = nx.grid_2d_graph(3, 3)  # 5x5 grid

G = U.subgraph([(0,0), (0,1),(0,2), (2,1), (2,2), (1,0), (1,2), (1,1)])

print(("Nodes of graph: ", G.nodes()))
print(("Edges of graph: ", G.edges()))

pos = nx.spring_layout(G,iterations=200)     # 위치를 지정한다.

# 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_nodes(G,pos,node_size=500, color="red", alpha=0.5)
nx.draw_networkx_edges(G,pos,width=1)
nx.draw_networkx_labels(G,pos,font_size=12,font_family='sans-serif')


print("H.edge=", list(G.edges))

#nx.draw(G)
plt.axes("off")
plt.show()

