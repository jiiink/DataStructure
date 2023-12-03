

import pygraphviz as pgv
from   networkx.drawing.nx_pydot import write_dot
import networkx as nx
import matplotlib.pyplot as plt

G=pgv.AGraph(directed=True)

#Attributes can be added when adding nodes or edge
G.add_node("ROOT", color='red')
for i in range(5):
    G.add_node("Child_%i" % i, color='blue')
    G.add_node("Grand_%i" % i, color='blue')
    G.add_node("Great_%i" % i, color='blue')

    G.add_edge("ROOT", "Child_%i" % i, color='blue')
    G.add_edge("Child_%i" % i, "Grand_%i" % i, color='blue')
    G.add_edge("Grand_%i" % i, "Great_%i" % i, color='blue')

# write to a dot file
G.write('test.dot')

#create a png file
G.layout(prog='dot') # use dot
G.draw('file.png')

nx.draw_networkx(G)
plt.show()