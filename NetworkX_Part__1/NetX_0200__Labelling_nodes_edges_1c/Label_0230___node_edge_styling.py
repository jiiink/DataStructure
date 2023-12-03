

import matplotlib.pyplot as plt
import networkx as nx

G=nx.Graph()

G.add_edge('a','b',weight=0.6, label="A")
G.add_edge('a','c',weight=0.2, label="X")
G.add_edge('c','d',weight=0.1, label="W")
G.add_edge('c','e',weight=0.7, label="G")
G.add_edge('c','f',weight=0.9, label="QQ")
G.add_edge('a','d',weight=0.3, label="BOOK")

elarge=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] >0.5]
esmall=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] <=0.5]

pos=nx.spring_layout(G) # positions for all nodes

# nodes
nx.draw_networkx_nodes(G,pos,node_size=700, node_color='y')

# edges
nx.draw_networkx_edges(G,pos,edgelist=elarge, width=3)
nx.draw_networkx_edges(G,pos,edgelist=esmall, width=2,alpha=0.5,edge_color='r',style='dashed')

# labels
nx.draw_networkx_labels(G,pos,font_size=20,font_family='sans-serif')

edge_labels = nx.get_edge_attributes(G, 'label')  # label로 표시한 변수를 선택
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)

for p in pos:  # raise text positions
    pos[p][1] -= 13.1

plt.axis('off')
plt.show() #