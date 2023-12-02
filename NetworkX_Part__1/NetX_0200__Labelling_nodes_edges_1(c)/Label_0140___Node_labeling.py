
import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(0)

def draw_graph(graph):

    G=nx.Graph()

    for edge in graph:
        G.add_edge(edge[0], edge[1])

    graph_pos = nx.spring_layout(G, iterations=100)
    #graph_pos = nx.random_layout(G, random_state=12 )

    nx.draw_networkx_nodes (G, graph_pos, node_size=800, node_color='red', alpha=1.0)
    nx.draw_networkx_edges (G, graph_pos)
    nx.draw_networkx_labels(G, graph_pos, font_color='b', font_size=11, font_family='sans-serif')

    plt.axis('off')
    plt.show()     # show graph


graph = [(20, "go"), (20,23), (21, "summer"), (21, "go"), (23, "summer"), (22, "summer"), ("summer", 23)]
draw_graph(graph)
