#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-22
#-------------------------------------------------------------------------------

import networkx
G = networkx.Graph()

G.add_node(5, time="11am")
G.add_node(1, time="7pm")
G.add_node(2, time="Spring")
G.add_node(4, time="Winter")
G.add_edge(1,4)
G.add_edge( 1,2)
G.nodes[1]["month"] = "February"
# Networkx 최신판에서 변경. G.node[]--> G.nodes[]

print( G.nodes(data=True) )
print( list(G.nodes(data=True)) )

print( list(G.nodes.data()) )
print( list(G.nodes(data="foo")) )
print( list(G.nodes.data("foo")) )

for w in G.neighbors(1) :
    print(w)

