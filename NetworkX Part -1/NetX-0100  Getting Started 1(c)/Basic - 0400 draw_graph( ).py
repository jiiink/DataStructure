# Name:        module1
# Author:      Zoh


import networkx as nx
import matplotlib.pyplot as plt

def draw_graph(graph):
    # graph 객체에서 노드들을 뽑아 nodes 에 저장한다
    nodes = set([n1 for n1, n2 in graph] + [n2 for n1, n2 in graph])
    print("nodes = ", nodes)

    G=nx.Graph()   # 그래프 객체를 하나 만든다

    for node in nodes:  # add_node() 를 통해 그래프에 노드를 입력한다
        G.add_node(node)

    for edge in graph:  # add_edges() 를 통해 노드간의 엣지를 지정해 준다
        G.add_edge(edge[0], edge[1])

    pos = nx.shell_layout(G)     # 위치를 지정한다.
    nx.draw(G, pos)

    nx.draw_networkx_nodes (G, pos, node_size=850, node_color='orange')
    # 그리려는 그래프의 속성을 설정해 준다
    nx.draw_networkx_edges (G, pos, width=2)
    nx.draw_networkx_labels(G, pos, font_size=10, font_color='white', font_family='sans-serif')

    plt.axis('off') # 그래프 그림을 파일로 저장한다
    plt.savefig("graph.png", dpi=1000) # 그림 파일 크기 지정
    plt.savefig("weighted_graph.png") # png 파일로 저장


    pos = nx.shell_layout(G)     # 그래프 레이아웃을 저장한다
    nx.draw(G, pos)
    plt.show()  # matplotlib 모듈을 이용해 그래프를 시각화 한다.# end of draw_graph( )

# end of draw_graph()

graph = [(20, 21),(21, 22),(22, 23), (21,24), (23, 24),(24, 25), (25, 20), (25,100)]
draw_graph(graph)

