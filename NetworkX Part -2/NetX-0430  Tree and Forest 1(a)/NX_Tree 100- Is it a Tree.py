#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
def is_tree(G):
    if nx.number_of_nodes(G) != nx.number_of_edges(G) + 1:
        return False
    return nx.is_connected(G)

if __name__ == '__main__':

    print(is_tree(nx.path_graph(5)))
    print(is_tree(nx.star_graph(5)))
    print(is_tree(nx.house_graph()))