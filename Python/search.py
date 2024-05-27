graph = {
    'a': ['b', 'c', 'd'],
    'b': ['m', 'n'],
    'c': ['l'],
    'd': ['o', 'p'],
    'm': ['x', 'y'],
    'n': ['u', 'v'],
    'l': None,
    'o': ['i', 'j'],
    'p': None,
    'x': None,
    'y': ['r', 's'],
    'u': None,
    'v': ['g', 'h'],
    'i': None,
    'j': None,
    'r': None,
    's': None,
    'g': None,
    'h': None,
}

def dfs(graph, start, end):
    MO = [start]
    DONG = []
    PATH = []
    FATHER = {start: None}
    goal = None 
    
    while MO:
        node = MO.pop()
        if node in end:
            goal = node
            break
        DONG.append(node)
        if graph[node] is not None:
            for neighbor in (graph[node])[::-1]:
                if neighbor not in MO:
                    MO.append(neighbor)
                    FATHER[neighbor] = node 
                    
    if goal in FATHER:
        step = goal
        while step is not None:
            PATH.insert(0, step)
            step = FATHER[step]

    if len(PATH) == 0:
        print(f'Không tồn tại đường đi từ {start} đến {end}.')
    else:
        print('Đường đi từ đỉnh tới đích là: ')
        print(' → '.join(PATH))
        print('Duyệt theo tìm kiếm chiều sâu: ')
        print(' → '.join(DONG+[goal]))

def bfs(graph, start, end):
    MO = [start]
    DONG = []
    PATH = []
    FATHER = {start: None}
    goal = None
    
    while MO:
        node = MO.pop()
        if node in end:
            goal = node 
            break 
        DONG.append(node)
        if graph[node] is not None:
            for neighbor in graph[node]:
                if neighbor not in MO:
                    MO.insert(0, neighbor)
                    FATHER[neighbor] = node
                    
    if goal in FATHER:
        step = goal 
        while step is not None:
            PATH.insert(0, step)
            step = FATHER[step]
    
    if len(PATH) == 0:
        print(f'Không tồn tại đường đi từ {start} đến {end}.')
    else:
        print('Đường đi từ đỉnh tới đích là: ')
        print(' → '.join(PATH))
        print('Duyệt theo tìm kiếm chiều rộng: ')
        print(' → '.join(DONG+[goal]))

bfs(graph, 'm', 's')