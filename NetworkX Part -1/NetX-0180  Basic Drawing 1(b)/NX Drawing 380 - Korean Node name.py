
import networkx as nx
import matplotlib.pyplot as plt
import numpy
import matplotlib

#matplotlib.rc('font', family='NanumGothic')  # 한글 폰트 설정
plt.rc('font', family='NanumGothic')
plt.title('한글 이름과 친구들')

numpy.random.seed(0)

def draw_graph(graph):

    G=nx.Graph()

    for edge in graph:
        G.add_edge(edge[0], edge[1])

    #graph_pos = nx.shell_layout(G)
    graph_pos = nx.spring_layout(G, iterations=100)


    nx.draw_networkx_nodes (G, graph_pos, node_size=900, node_color='lightgreen')
    nx.draw_networkx_edges (G, graph_pos)
    nx.draw_networkx_labels(G, graph_pos, font_size=14, font_family='NanumMyeongjo')

    plt.axis('off')
    plt.show()


graph = [(20, "go"), (20,23), (21, "닭"), (21, "달님"), (23, "닭"),\
         (22, "닭"), ("달님", 23)]

draw_graph(graph)
