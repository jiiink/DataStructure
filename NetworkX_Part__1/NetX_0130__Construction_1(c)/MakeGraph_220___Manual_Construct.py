
import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(1) #  이것 없애면 randomize된다.

G=nx.Graph()
G.add_node("a")
G.add_nodes_from(["b","orange"])

G.add_edge(1,2)
G.add_edge("book","orange")
edge = ("d", "e")  # tuple로 edge를 만들어 넣을 수 있다.
G.add_edge(*edge)
edge = ("a", "b")
G.add_edge(*edge)
G.add_edge( *(1, "book") )
G.add_edge( *('b', "book") )
G.add_edge( *('a', 2) )

print(("Nodes of graph: ", G.nodes()))
print(("Edges of graph: ", G.edges()))

pos = nx.spring_layout(G)     # 위치를 지정한다.

# 그리려는 그래프의 속성을 설정해 준다
nx.draw_networkx_nodes(G,pos,node_size=22)
nx.draw_networkx_edges(G,pos,width=1)
nx.draw_networkx_labels(G,pos,font_size=10,font_family='sans-serif')

nx.draw(G,pos)
#plt.savefig("simple_path.png") # save as png
plt.show() # display
