#--------------------------------------------------------
# Author:      Zoh Que
# Created:     04-08-2023
#--------------------------------------------------------
import networkx as nx

G = nx.Graph()

G.add_edge("a", "b", weight=0.6)
G.add_edge("b", "c", weight=0.7)
G.add_edge("c", "d", weight=2.3)

sum_weights = nx.path_weight(G, ["a", "b", "c", "d"], weight="weight")


print(sum_weights) # Output: 0.8