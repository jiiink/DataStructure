#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-21
#-------------------------------------------------------------------------------


import matplotlib.pyplot as plt
import networkx as nx

edges = [['A','B'],['B','C'],['B','D'], ['C', 'D']]

G = nx.Graph()
G.add_edges_from(edges)
pos = nx.spring_layout(G)

plt.figure()
nx.draw(G,pos,edge_color='black',width=1,linewidths=1,\
          node_size=500,node_color='pink',alpha=0.9,\
         labels={node:node for node in G.nodes()})

My_labels=dict([((u,v), u+"-"+v ) for u,v,d in G.edges(data=True)])

for w in pos :  # 각 정점의 위치를 조정. x축으로 오른쪽 0.04, 아래로 0.01
    print( pos[w][0],pos[w][1] )
    pos[w][0] += 0.04
    pos[w][1] += 0.01


nx.draw_networkx_edge_labels(G,pos,edge_labels= My_labels,font_color='red')

plt.axis('off')
plt.show()