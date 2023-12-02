#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-21
#-------------------------------------------------------------------------------


import networkx as nx
import matplotlib.pyplot as plt

G=nx.path_graph(6)
pos=nx.spring_layout(G)
nx.draw(G,pos)
x,y=pos[2]

for w in pos :
    ax= pos[w][0]
    ay= pos[w][1]
    print( f'i={w}, {ax:7.4f}, {ay:7.4f}')

plt.text( x-0.1, y+0.1, s='Edge label',   # y축으로 약간 내린다.
         bbox=dict(facecolor='red', alpha=0.5),
         horizontalalignment='center') # verticalalignment, center top bottom
plt.show( )
