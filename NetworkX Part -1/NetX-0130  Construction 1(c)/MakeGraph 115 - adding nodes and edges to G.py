
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G      = nx.cycle_graph(10)

G.add_nodes_from([11, 12])
G.add_edges_from([(2, 5), (6,12) ] )
G.add_edge( 11,5 )
print(("Nodes of graph: ", G.nodes()))
print(("Edges of graph: ", G.edges()))

pos = nx.spring_layout(G)     # 위치를 지정한다.

# 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_nodes(G,pos,node_size=62)
nx.draw_networkx_edges(G,pos,width=1)
nx.draw_networkx_labels(G,pos,font_color='w',font_size=10,font_family='sans-serif')

nx.draw(G,pos)
#plt.savefig("simple_path.png") # save as png
plt.show() # display
