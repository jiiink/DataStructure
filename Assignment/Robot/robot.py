import heapq

def dijkstra(N, t, grid):
    directions = [(1, 0), (0, 1), (-1, 0), (0, -1)]  # 아래, 오른쪽, 위, 왼쪽

    def is_valid(x, y):
        return 1 <= x <= N and 1 <= y <= N

    def calculate_time(current, next_point):
        if current[2] == next_point[2]:
            return 1  # 이동 시간
        else:
            return t  # 방향 전환 시간

    start = (1, 1, 0)  # 시작점 (x, y, 방향)
    destination = (N, N)

    distances = {(x, y, d): float('inf') for x in range(1, N + 1) for y in range(1, N + 1) for d in range(4)}
    distances[start] = 0

    priority_queue = [(0, start)]

    while priority_queue:
        current_distance, current_point = heapq.heappop(priority_queue)

        if current_point == destination:
            return current_distance, current_point  # 최단 경로를 찾았을 때 종료

        for dx, dy in directions:
            next_x, next_y = current_point[0] + dx, current_point[1] + dy
            next_point = (next_x, next_y, current_point[2])

            if is_valid(next_x, next_y) and grid[next_y - 1][next_x - 1] == 0:
                time_to_next = calculate_time(current_point, next_point)

                if current_distance + time_to_next < distances[next_point]:
                    distances[next_point] = current_distance + time_to_next
                    heapq.heappush(priority_queue, (distances[next_point], next_point))

    return -1, None  # 도달할 수 없는 경우

def print_grid_with_path(N, path):
    grid_with_path = [['-' for _ in range(N)] for _ in range(N)]

    for point in path:
        x, y, _ = point
        grid_with_path[y - 1][x - 1] = '*'

    for row in grid_with_path:
        print(' '.join(row))

# 입력 예시
N, t = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(N)]

result_distance, result_path = dijkstra(N, t, grid)

if result_path is not None:
    print("Shortest Distance:", result_distance)
    print_grid_with_path(N, result_path)
else:
    print("Cannot reach the destination.")
