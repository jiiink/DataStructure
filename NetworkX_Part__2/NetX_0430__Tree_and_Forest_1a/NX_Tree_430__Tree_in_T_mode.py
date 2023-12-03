



import matplotlib.pyplot as plt
import networkx as nx
import pydot
from networkx.drawing.nx_pydot import graphviz_layout

T = nx.balanced_tree(2, 4)

pos = graphviz_layout(T, prog="dot")  # Top to Down
nx.draw(T, pos)
plt.show()
