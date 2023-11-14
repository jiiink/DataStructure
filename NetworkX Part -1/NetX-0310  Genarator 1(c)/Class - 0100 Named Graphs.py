
# https://networkx.github.io/documentation/networkx-1.9.1/reference/algorithms.operators.html

import networkx as nx
import matplotlib.pyplot as plt
import numpy

numpy.random.seed(121)

peter       = nx.petersen_graph()
tutte       = nx.tutte_graph()
maze        = nx.sedgewick_maze_graph()
tetra       = nx.tetrahedral_graph()
cycle       = nx.cycle_graph(10)
wheel       = nx.wheel_graph(10)

U = [ peter, tutte, maze, tetra, cycle, wheel]

for w in U:
    Gname = [key for key, value in locals().items() if value == w ]
    print(f" Graph Name = {Gname[0]}")

    plt.title(str(Gname[0]))
    nx.draw( w )
    plt.show( )
