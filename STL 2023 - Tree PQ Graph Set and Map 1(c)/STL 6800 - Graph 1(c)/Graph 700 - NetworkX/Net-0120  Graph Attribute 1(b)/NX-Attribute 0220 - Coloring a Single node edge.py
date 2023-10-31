#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-06-09
#-------------------------------------------------------------------------------

import random
import networkx as nx
import matplotlib.pyplot as plt


def mark_node( P ) :
    nx.draw(G, pos=pos, nodelist=P, node_size=900, node_color='yellow'  )

def mark_node_color( P, mycolor ) :
    nx.draw(G, pos=pos, nodelist=P, node_size=900, node_color=mycolor  )

#def mark_node( P ) :
#    nx.draw(G, pos=pos, edgelist=P, node_color='red'  )

fig = plt.figure(figsize=(10,8)) # Main panel size를 조정 8인치 by 8인치

N = 12
M = 9
G=nx.grid_2d_graph(N,M)

for w in range(M) :
    G.add_edge( (0,w),(N-1,w) )

pos = dict( (n, n) for n in G.nodes() ) # pos=(위치, node 이름)
# vlabels = dict( ((i, j), i * 10 + j) for i, j in G.nodes() ) # 사용안함.
vlabels = dict( ((i, j), str(i)+","+str(j) ) for i, j in G.nodes() )

nx.draw_networkx(G, pos=pos, node_size=700, node_color='coral', \
                 edge_color='blue', labels=vlabels)

nx.draw(G, pos=pos, nodelist=[(0,0), (1,1)], \
                  node_size=900, node_color='yellow'  )

plt.title("Solid Graph Drawing")

##labels = {}
##for node in G.nodes():
##    if random.randrange(100)%3 == 0 :
##        labels[node] = node
##
###nx.draw(G, pos, with_labels=False)
###Now only add labels to the nodes you require (the hubs in my case)
##nx.draw_networkx_labels(G,pos,labels,font_size=10,font_color='w')


for w in list( G.nodes ) :
    print( f' w={w} >> {list( G.neighbors( w ))}' )

my=[ (4,3), (8,6), (5,6) ]
#mark_node( my )
mark_node_color( my, "green" )


plt.axis('off')
plt.show()