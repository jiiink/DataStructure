
import networkx as nx
import matplotlib.pyplot as plt
import math


G = nx.Graph()  # Creat empty graph
G.add_node(1)   # A list of nodes
G.add_nodes_from([2, 3])
# A container of nodes

G.add_node(-88)
G.add_node(100) # cosine function
G.add_node(200)
print("1. Nodes of Graph=", G.nodes())

e=(200,3)
G.add_edge(*e) # unpack tuple, 반드시 *X로 넣어야 한다.


G.add_edges_from([(1, 2), (200,100), (0,3),(3,-88), (1, 3), (0,-88), (1,4), (4,200), (2,100), (3,100)])
#G.remove_edge(1, 2)
print("2. Nodes of Graph=",G.nodes())
print("3. Edges of Graph=",G.edges())

for x in G.nodes() :
    print("x=", x  , "degree=", G.degree( x ) , "이웃=", G[x])

print("out=", G.neighbors(1))

pos = nx.spring_layout(G)     # 위치를 지정한다.
#nx.draw(g, pos)  # network을 그림.

nx.draw_networkx_nodes(G,pos,node_size=800, node_color='tomato') # 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_edges(G,pos,width=2)
nx.draw_networkx_labels(G,pos,font_color='w', font_size=10,font_family='sans-serif')
#plt.savefig('testplot.jpg')
plt.axis('off')
plt.show( ) # 그려진 그림을 화면에 matplotlib으로 뿌림



