# Graph를 dict(사전구조)를 이용해서 정의함.

graph = dict()
graph['A'] = ['B', 'C']
graph['B'] = ['E','C', 'A']
graph['C'] = ['A', 'B', 'E','F']
graph['E'] = ['B', 'C']
graph['F'] = ['C']

matrix_elements = sorted(graph.keys())
cols = rows = len(matrix_elements)

# 모든 원소가 0인 empty adjacency matrix를 만듬. 크기는 N X N
adjacency_matrix = [[0 for x in range(rows)] for y in range(cols)]

print("\n 1. 초기 인접행렬을 출력해보자")
for w in adjacency_matrix :
    print(w)


edges_list = []
for key in matrix_elements:
    for neighbor in graph[key]:
       edges_list.append((key,neighbor))

print("\n 2. edge list를 모두 출력해보자")
print(edges_list)


for edge in edges_list:
        index_of_first_vertex = matrix_elements.index(edge[0])
        index_of_second_vertex = matrix_elements.index(edge[1])
        adjacency_matrix[index_of_first_vertex][index_of_second_vertex] = 1


print("\n 3. 인접행렬을 출력해보자")
for w in adjacency_matrix :
    print(w)
