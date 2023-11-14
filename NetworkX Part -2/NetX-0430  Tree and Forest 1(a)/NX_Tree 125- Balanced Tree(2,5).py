
#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

# pydot을 사용해서 그려봅니다.
"""
 balanced_tree(r, h, create_using=None)[source]
    Return the perfectly balanced r-tree of height h.
    Parameters:
        r (int) – Branching factor of the tree
        h (int) – Height of the tree
        create_using (NetworkX graph type, optional) – Use specified type to construct graph (default = networkx.Graph)

"""

import matplotlib.pyplot as plt
import networkx as nx
T = nx.generators.balanced_tree(2, 5)
T = nx.balanced_tree(3, 4)
nx.draw(T)
plt.show()