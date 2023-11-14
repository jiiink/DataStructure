
import networkx as nx
import matplotlib.pyplot as plt

def draw_graph(graph):

    G=nx.Graph()


    for edge in graph:
        G.add_edge(edge[0], edge[1])

    # There are graph layouts like shell, spring, spectral and random.
    # Shell layout usually looks better, so we're choosing it.
    graph_pos = nx.shell_layout(G)
    graph_pos = nx.spring_layout(G)


    nx.draw_networkx_nodes (G, graph_pos, node_size=1000, node_color='lightblue', alpha=1.0)
    nx.draw_networkx_edges (G, graph_pos)
    nx.draw_networkx_labels(G, graph_pos, font_size=14, font_family='sans-serif')

    # show graph
    plt.axis('off')
    plt.show()

# draw example
# graph is a list of tuples of nodes. Each tuple defining the
# connection between 2 nodes
graph = [(20, "go"), (20,23), (21, "summer"), (21, "go"), (23, "summer"), (22, "summer"), ("summer", 23)]

draw_graph(graph)
