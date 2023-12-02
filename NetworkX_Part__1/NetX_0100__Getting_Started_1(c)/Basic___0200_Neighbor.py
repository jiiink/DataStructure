import networkx as nx
import matplotlib.pyplot as plot
import numpy


G = nx.Graph()
G.add_edge('a', 'b', score=3)
G.add_edge('b', 'c', score=4)
G.add_edge('a', 'c', score=1)
G.add_edge('a', 'd', score=7)
G.add_edge('b', 'e', score=8)
G.add_edge('c', 'd', score=9)

# If we wanted a's neighbors, we just access that node directly:

print("Dict G['a']=", G['a'])

# To sort those results, we use tools from the standard Python toolbox.
# .items() to convert the dict to a tuple and the sorted builtin to sort the results:
esort = sorted(list(G['a'].items()), key=lambda edge: edge[1]['score'])
print("esort=", esort)

xpos=nx.spring_layout(G)
nx.draw(G, pos=xpos, node_color='r',edge_color='b')
nx.draw_networkx_edges (G,xpos,width=2)
nx.draw_networkx_labels(G,xpos,font_size=12,font_family='sans-serif')

plot.show()

