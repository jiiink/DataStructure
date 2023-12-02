
import matplotlib.pyplot as plt
import networkx as nx

G = nx.karate_club_graph()
print("Node Degree")

for v in G:
    print('vertex[%s], degree= %s' % (v, G.degree(v)))

plt.text(-0.5, 1.1,'matplotlib',
     horizontalalignment='center',
     verticalalignment='center' )

#nx.draw_spring(G, with_labels=True)
nx.draw_kamada_kawai(G, with_labels=True)
#nx.draw_circular(G, with_labels=True)
plt.show()
