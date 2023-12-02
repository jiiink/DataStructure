

# 반드시 pydot을 설치해야 합니다. 미리

import matplotlib.pyplot as plt
import networkx as nx
import pydot
from   networkx.drawing.nx_pydot import graphviz_layout

T = nx.balanced_tree(2, 4)

pos = graphviz_layout(T, prog="circo")  # rectilinear drawing
nx.draw(T, pos, node_color="orange", alpha=0.3)
plt.show()
