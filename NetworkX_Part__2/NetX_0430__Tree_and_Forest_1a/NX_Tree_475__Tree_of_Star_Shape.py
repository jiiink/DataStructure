
import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()
G.add_node("ROOT")

for i in range(6):  # 6 단계로
    G.add_node("D_%i" % i)
    G.add_node("DD_%i" % i)
    G.add_node("DDD_%i" % i)
    G.add_node("END_%i" % i)

    G.add_edge("ROOT", "D_%i" % i)
    G.add_edge("D_%i" % i, "DD_%i" % i)
    G.add_edge("DD_%i" % i, "DDD_%i" % i)
    G.add_edge("DDD_%i" % i, "END_%i" % i, )


plt.title(" Depth k Tree Drawing")
nx.draw_networkx(G)

plt.axis('off')
plt.show()