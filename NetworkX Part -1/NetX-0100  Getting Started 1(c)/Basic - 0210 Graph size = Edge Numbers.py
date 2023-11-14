#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-06-09
#-------------------------------------------------------------------------------
import random
import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()   # or DiGraph, MultiGraph, MultiDiGraph, etc
G.add_edge('a', 'b', weight=2)
G.add_edge('b', 'c', weight=4)
print( G.size() )
print( G.size(weight='weight') )


