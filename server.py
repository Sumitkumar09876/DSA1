def solve(N, M, enemy):
    graph = [[] for _ in range(N+1)]
    
    for u, v in enemy:
        graph[u].append(v)
        graph[v].append(u)
    
    colors = [0] * (N+1)
    
    def bipartite_dfs(node, color):
        colors[node] = color
        
        for neighbor in graph[node]:
            if colors[neighbor] == 0:
                opposite_color = 2 if color == 1 else 1
                if not bipartite_dfs(neighbor, opposite_color):
                    return False
            elif colors[neighbor] == color:
                return False
        
        return True
    
    for i in range(1, N+1):
        if colors[i] == 0:
            if not bipartite_dfs(i, 1):
                return 0
    
    color1_count = colors.count(1)
    color2_count = colors.count(2)
    
    max_equal_size = min(color1_count, color2_count)
    
    if color1_count == color2_count:
        return color1_count
    
    return N // 2

N = int(input())
M = int(input())
enemy = [list(map(int, input().split())) for i in range(M)]
out_ = solve(N, M, enemy)
print(out_)