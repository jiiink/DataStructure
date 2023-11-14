"""
Graph products.
"""
from itertools import product
import matplotlib.pyplot as plt

import networkx as nx
from networkx.utils import not_implemented_for

__all__ = ['tensor_product', 'cartesian_product',
           'lexicographic_product', 'strong_product', 'power',
           'rooted_product']


def _dict_product(d1, d2):
    return dict((k, (d1.get(k), d2.get(k))) for k in set(d1) | set(d2))


# Generators for producting graph products
def _node_product(G, H):
    for u, v in product(G, H):
        yield ((u, v), _dict_product(G.nodes[u], H.nodes[v]))


def _directed_edges_cross_edges(G, H):
    if not G.is_multigraph() and not H.is_multigraph():
        for u, v, c in G.edges(data=True):
            for x, y, d in H.edges(data=True):
                yield (u, x), (v, y), _dict_product(c, d)
    if not G.is_multigraph() and H.is_multigraph():
        for u, v, c in G.edges(data=True):
            for x, y, k, d in H.edges(data=True, keys=True):
                yield (u, x), (v, y), k, _dict_product(c, d)
    if G.is_multigraph() and not H.is_multigraph():
        for u, v, k, c in G.edges(data=True, keys=True):
            for x, y, d in H.edges(data=True):
                yield (u, x), (v, y), k, _dict_product(c, d)
    if G.is_multigraph() and H.is_multigraph():
        for u, v, j, c in G.edges(data=True, keys=True):
            for x, y, k, d in H.edges(data=True, keys=True):
                yield (u, x), (v, y), (j, k), _dict_product(c, d)


def _undirected_edges_cross_edges(G, H):
    if not G.is_multigraph() and not H.is_multigraph():
        for u, v, c in G.edges(data=True):
            for x, y, d in H.edges(data=True):
                yield (v, x), (u, y), _dict_product(c, d)
    if not G.is_multigraph() and H.is_multigraph():
        for u, v, c in G.edges(data=True):
            for x, y, k, d in H.edges(data=True, keys=True):
                yield (v, x), (u, y), k, _dict_product(c, d)
    if G.is_multigraph() and not H.is_multigraph():
        for u, v, k, c in G.edges(data=True, keys=True):
            for x, y, d in H.edges(data=True):
                yield (v, x), (u, y), k, _dict_product(c, d)
    if G.is_multigraph() and H.is_multigraph():
        for u, v, j, c in G.edges(data=True, keys=True):
            for x, y, k, d in H.edges(data=True, keys=True):
                yield (v, x), (u, y), (j, k), _dict_product(c, d)


def _edges_cross_nodes(G, H):
    if G.is_multigraph():
        for u, v, k, d in G.edges(data=True, keys=True):
            for x in H:
                yield (u, x), (v, x), k, d
    else:
        for u, v, d in G.edges(data=True):
            for x in H:
                if H.is_multigraph():
                    yield (u, x), (v, x), None, d
                else:
                    yield (u, x), (v, x), d


def _nodes_cross_edges(G, H):
    if H.is_multigraph():
        for x in G:
            for u, v, k, d in H.edges(data=True, keys=True):
                yield (x, u), (x, v), k, d
    else:
        for x in G:
            for u, v, d in H.edges(data=True):
                if G.is_multigraph():
                    yield (x, u), (x, v), None, d
                else:
                    yield (x, u), (x, v), d


def _edges_cross_nodes_and_nodes(G, H):
    if G.is_multigraph():
        for u, v, k, d in G.edges(data=True, keys=True):
            for x in H:
                for y in H:
                    yield (u, x), (v, y), k, d
    else:
        for u, v, d in G.edges(data=True):
            for x in H:
                for y in H:
                    if H.is_multigraph():
                        yield (u, x), (v, y), None, d
                    else:
                        yield (u, x), (v, y), d


def _init_product_graph(G, H):
    if not G.is_directed() == H.is_directed():
        raise nx.NetworkXError("G and H must be both directed or",
                               "both undirected")
    if G.is_multigraph() or H.is_multigraph():
        GH = nx.MultiGraph()
    else:
        GH = nx.Graph()
    if G.is_directed():
        GH = GH.to_directed()
    return GH

G = nx.cycle_graph(5)
H = nx.path_graph(5)

nx.draw(G, node_size=900, node_color='y', with_labels=True)
plt.show()
nx.draw(H, node_size=900, node_color='y', with_labels=True)
plt.show()



