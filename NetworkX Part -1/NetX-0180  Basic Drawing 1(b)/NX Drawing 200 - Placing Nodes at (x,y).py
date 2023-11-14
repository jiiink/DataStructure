
import matplotlib.pyplot as plt
import networkx as nx

G = nx.house_graph()

pos = {0: (0,  0),  # 배치할 node의 물리적 위치 (x,y)를 지정합니다.
       1: (10, 0),
       2: (0, 10),
       3: (10, 8),
       4: (5, 15)}



nx.draw_networkx_nodes(G, pos, node_size=700, nodelist=[4])
nx.draw_networkx_nodes(G, pos, node_size=800, nodelist=[0, 1, 2, 3], node_color='b', with_label=True)
nx.draw_networkx_edges(G, pos, alpha=0.5, width=6)
plt.axis('off')
plt.show()