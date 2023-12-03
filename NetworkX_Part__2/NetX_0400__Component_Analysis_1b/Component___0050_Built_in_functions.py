
import networkx as nx
import matplotlib.pyplot as plt
import math


"""
is_connected(G) :               Returns True if the graph is connected, False otherwise.

number_connected_components(G) : Returns the number of connected components.

connected_components(G):        Generate connected components.

node_connected_component(G, n):
            Returns the set of nodes in the component of graph containing node n.


is_strongly_connected(G): Test directed graph for strong connectivity.

number_strongly_connected_components(G): Returns number of strongly connected components in graph.

strongly_connected_components(G): Generate nodes in strongly connected components of graph.

strongly_connected_components_recursive(G) : Generate nodes in strongly connected components of graph.

kosaraju_strongly_connected_components(G[, ...]) : Generate nodes in strongly connected components of graph.

condensation(G[, scc]) : Returns the condensation of G.


is_weakly_connected(G):         Test directed graph for weak connectivity.

number_weakly_connected_components(G):      Returns the number of weakly connected components in G.

weakly_connected_components(G):     Generate weakly connected components of G.

is_attracting_component(G) :        Returns True if G consists of a single attracting component.

number_attracting_components(G) :   Returns the number of attracting components in G.

attracting_components(G):           Generates the attracting components in G.


is_biconnected(G) :                 Returns True if the graph is biconnected, False otherwise.

biconnected_components(G) :     Returns a generator of sets of nodes, one set for each biconnected component of the graph

biconnected_component_edges(G) : Returns a generator of lists of edges, one list for each biconnected component of the input graph.

articulation_points(G) :        Yield the articulation points, or cut vertices, of a graph.

is_semiconnected(G[, topo_order]) : Returns True if the graph is semiconnected, False otherwise.

"""