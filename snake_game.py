def Min_budget(N, arr):
    if N == 0 or not arr:
        return -1
    
    # Create a disjoint set for connected components
    parent = {}
    rank = {}
    
    def find(x):
        if x not in parent:
            parent[x] = x
            rank[x] = 0
        if parent[x] != x:
            parent[x] = find(parent[x])
        return parent[x]
    
    def union(x, y):
        root_x = find(x)
        root_y = find(y)
        if root_x == root_y:
            return
        if rank[root_x] < rank[root_y]:
            parent[root_x] = root_y
        else:
            parent[root_y] = root_x
            if rank[root_x] == rank[root_y]:
                rank[root_x] += 1
    
    # Build a graph to represent possible sums
    arr_set = set(arr)
    for i in range(N):
        for j in range(N):
            if i != j and arr[i] + arr[j] in arr_set:
                union(arr[i], arr[i] + arr[j])
                union(arr[j], arr[i] + arr[j])
    
    # Count the number of connected components
    components = set()
    for val in arr:
        components.add(find(val))
    
    return len(components)