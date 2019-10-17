# cook your dish here
graph = {'A': ['B', 'D'],
         'B': ['C','F'],
         'C': ['E', 'G'],
         'G': ['E'],
         'E': ['B','F'],
         'F': ['A'],
         'D': ['F']}
         
         
def bfs(graph,root):
    visited = []
    queue = [root]
    while queue:
        node = queue.pop(0)
        if node not in visited:
            visited.append(node)
            neighbours = graph[node]
            for i in neighbours:
                queue.append(i)
    return visited
    
output = bfs(graph,'A')
print(output)
