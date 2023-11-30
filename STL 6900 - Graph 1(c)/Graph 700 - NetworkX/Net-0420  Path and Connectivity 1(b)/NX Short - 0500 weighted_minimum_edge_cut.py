
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.Graph()
G.add_edge('x', 'a', weight=6)
G.add_edge('x', 'b', weight=1)
G.add_edge('a', 'c', weight=9)
G.add_edge('b', 'c', weight=2)
G.add_edge('b', 'd', weight=9)
G.add_edge('d', 'e', weight=7)
G.add_edge('c', 'y', weight=3)
G.add_edge('e', 'y', weight=8)

pos=nx.spring_layout(G, seed=345)
cut_value, partition = nx.stoer_wagner(G)

print("cut_value=", cut_value )
for w in partition :
    print(w)


# Drawing Code
edge_labels = nx.get_edge_attributes(G, 'weight')  # label로 표시한 변수를 선택
nx.draw_networkx_nodes(G, pos, node_size=600, node_color='g')
nx.draw_networkx_edges(G, pos, width=2)
nx.draw_networkx_edge_labels( G,  pos, edge_labels=edge_labels,  font_color='r' )
nx.draw_networkx_labels(G,pos,font_size=20, font_color='white', font_family='sans-serif')

plt.axis('off')
plt.show()





