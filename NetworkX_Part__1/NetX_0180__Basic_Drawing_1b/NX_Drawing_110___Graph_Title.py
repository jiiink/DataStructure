#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-06-09
#-------------------------------------------------------------------------------


import networkx as nx
import matplotlib.pyplot as plt

w = 6
h = 6
d = 70
plt.figure(figsize=(w, h), dpi=d)



G = nx.cycle_graph(5)

#plt.figure()
plt.title('A title')

nx.draw(G)
plt.show()
#############################
