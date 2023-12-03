
import networkx as nx
import math

g = nx.Graph() #empty graph

def makegraph():
    global g
    g.add_node(1)   # A list of nodes
    g.add_nodes_from([2, 3])

    h = nx.path_graph(5)
    g.add_nodes_from(h)  # 그래프를 통째로 더할 수도 있다.
    g.remove_node(2)

    g.add_node('string') # 노드 이름을 제 맘대로 정할 수 도 있다.
    g.add_node(100)
    g.add_node(200)
    #print(g.nodes())

    g.add_edge(1, 2, score=999) #score weight is added
    e=(2,3)
    g.add_edge(*e) # unpack tuple
    g.add_edges_from([(1, 2), (0,3),(1, 3), (0,'string'), (1,4), (2,100), (3,100)])
    #g.remove_edge(1, 2)


makegraph()

print(g.nodes())
print(g.edges())

print("모든 node를 차수와 인접node와 같이 출력해보자" )
for x in g.nodes() :
    print("node name=", x  , "degree=", g.degree( x ) , "이웃=", g[x])

print("out=", g.neighbors(1))

