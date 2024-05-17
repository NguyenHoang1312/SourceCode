graph = {
    'a': ['b', 'c', 'd'],
    'b': ['h', 'i'],
    'c': ['e', 'f'],
    'd': ['g'],
    'h': [],
    'i': [],
    'e': [],
    'f': ['j', 'k'],
    'g': [],
    'j': [],
    'k': [],
}

def dfs(graph, start, end):
    MO = [start]
    DONG = []
    father = {start: None}
    path = []
    while MO:
        node = MO.pop()
        if node in end:
            DONG.append(node)
            break
        DONG.append(node)
        for neighbor in (graph[node])[::-1]:
            if neighbor not in MO:
                MO.append(neighbor)
                father[neighbor] = node 
    if end in father:
        step = end
        while step is not None:
            path.insert(0, step)
            step = father[step]
    return DONG, path

def bfs(graph, start, end):
    MO = [start]
    DONG = []
    father = {start: None}
    path = []
    while MO:
        node = MO.pop()
        if node in end:
            DONG.append(node)
            break
        DONG.append(node)
        for neighbor in (graph[node]):
            if neighbor not in MO:
                MO.insert(0, neighbor)
                father[neighbor] = node 
    if end in father:
        step = end
        while step is not None:
            path.insert(0, step)
            step = father[step]
    return DONG, path
        

search, path = bfs(graph, 'a', 'j')
print('Thứ tự duyệt từ đỉnh tới đích là:')
print(' -> '.join(search))
print('Đường đi từ đỉnh tới đích là:')
print(' -> '.join(path))