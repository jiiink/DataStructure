
import networkx as nx
import matplotlib.pyplot as plt
import numpy

N  = 3
G  = nx.grid_2d_graph(N+1,N)

vlist = list(G.nodes)  # 항상 이렇게 list를 만들어야 한다.
elist = list(G.edges)

for w in vlist:
    print(f'vertex ={w}')

for w in elist:
    print(f'edge = {w}')

for x in vlist :
    for y in vlist :
        if (x,y) in elist :
            print( f'{x,y} is in Edges ')
        else :
            print( f'{x,y} is not in Edges ')

nx.draw(G, node_size=900, node_color='coral', with_labels=True, \
        font_color='k')  # network을 그림.

plt.show() # display


