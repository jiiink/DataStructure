#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
import networkx as nx
import matplotlib.pyplot as plt


s = 5
G = nx.grid_graph(dim=[s,s])

nodes = list(G.nodes)
edges = list(G.edges)
p = []
for i in range(0, s):
    for j in range(0, s):
        p.append([i,j])
for i in range(0, len(nodes)):
    G.node[nodes[i]]['pos'] = p[i]

pos = {}
for i in range(0, len(nodes)):
        pos[nodes[i]] = p[i]

"""
node_color (color string, or array of floats, (default=’#1f78b4’))
– Node color. Can be a single color format string,
or a sequence of colors with the same length as nodelist.
If numeric values are specified they will be mapped to
colors using the cmap and vmin,vmax parameters. See matplotlib.scatter for more details.
"""

colors = [i/len(G.nodes) for i in range(len(G.nodes))]

nx.draw(G, pos, node_color=colors)


plt.show()