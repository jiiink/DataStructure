
import networkx as nx
import matplotlib.pyplot as plt
import numpy

G = nx.path_graph(5)
nlist = list(G.nodes)
glist = list(G)

G.add_node(1, time='5pm')
G.nodes[0]['foo'] = 'bar'
G.nodes[4]['xoo'] = 'your'
print( list(G.nodes(data=True)))
print( list(G.nodes.data()) )

print( list(G.nodes(data='foo')) )
print( list(G.nodes(data='time')) )



pos = nx.spring_layout(G)
nx.draw_networkx_nodes(G,pos,node_size=62)
nx.draw_networkx_edges(G,pos,width=1)
nx.draw_networkx_labels(G,pos,font_color='w',font_size=10,font_family='sans-serif')

nx.draw(G,pos)
#plt.savefig("simple_path.png") # save as png
plt.show() # display


