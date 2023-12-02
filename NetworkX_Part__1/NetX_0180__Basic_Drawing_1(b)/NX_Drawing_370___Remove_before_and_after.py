#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-06-09
#-------------------------------------------------------------------------------


import networkx
import matplotlib.pyplot as plt

w = 6
h = 6
d = 70
plt.figure(figsize=(w, h), dpi=d)


G = networkx.Graph()
G.add_edges_from([(1, 2), (2, 3), (3,4), (1,5), (2,5)])
pos= networkx.spring_layout(G, seed=1234 ) # seed는 모양으로 고정시킨다.

networkx.draw(G, pos, node_color='tomato', with_labels=True, node_size=700, seed=1234)
plt.show()

#plt.clf()

plt.figure(figsize=(w, h), dpi=d)

G.remove_node(3)
G.remove_edge(1,2)


networkx.draw(G, pos, node_color='khaki', with_labels=True, node_size=700, seed=1234 )
plt.show()



