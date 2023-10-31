# 주어진 그래프에서 BFS를 수행함. 필요한 자료구조는 Queue
# 하나를 넣고, 꺼내면서 이것과 이웃한 놈들을 모두 검사하면서
#  if 방문이 안되었다면,
#                방문 마크를 하고 다시 Queue에 집어 넣음
#

from collections import deque

graph = dict()
graph['A'] = ['B', 'G', 'D']
graph['B'] = ['A', 'F', 'E']
graph['C'] = ['F', 'H']
graph['D'] = ['F', 'A']
graph['E'] = ['B', 'G']
graph['F'] = ['B', 'D', 'C']
graph['G'] = ['A', 'E']
graph['H'] = ['C']


def breadth_first_search(graph, root):
        visited_vertices = list()
        graph_queue = deque([root])
        visited_vertices.append(root)
        node = root

        while len(graph_queue) > 0:
            node = graph_queue.popleft()
            adj_nodes = graph[node]

            remaining_elements = set(adj_nodes).difference(set(visited_vertices))
            if len(remaining_elements) > 0:
                for elem in sorted(remaining_elements):
                    visited_vertices.append(elem)
                    graph_queue.append(elem)

        return visited_vertices

Start = 'A'
print("\n 특정 노드 [", Start, "]부터 시작하는 BFS 방문순서")
print(breadth_first_search( graph, Start ))

Start = 'F'
print("\n 특정 노드 [", Start, "]부터 시작하는 BFS 방문순서")
print(breadth_first_search( graph, Start ))