# code is succesfully tested

def build_graph(edge_list, vertices):
    graph = dict()

    for v in range(1, vertices + 1):
        graph[v] = list()

    for edge in edge_list:
        graph[edge[0]].append(edge[1])

    return graph

def bfs(vis, graph, trav, queue):
    if len(queue) <= 0:
        return
    node = queue.pop(0)
    trav.append(node)

    for nbr in graph[node]:
        if not visited[nbr]:
            vis[nbr] = True
            queue.append(nbr)
    
    bfs(vis, graph, trav, queue)



def dfs(node, vis, graph, trav):
    vis[node] = True
    trav.append(node)

    for nbr in graph[node]:
        if not vis[nbr]:
            dfs(nbr, vis, graph, trav)


if __name__ == "__main__":
    # directed graph
    edge_list = [[1,2],[1,4],[1,5],[2,3],[2,6],[4,5],[7,8]]
    edge_list = [[1,2], [1,4], [1,5], [2,3], [2,6], [4,5], [4,7], [5,6], [5,8], [7,8], [8, 9]]
    # edge_list = [[1,2], [1,3], [2,3], [3,1], [3,4], [4,4]]
    edge_list = [[7,2], [7,3], [2,1], [3,5], [3, 8], [5,4], [8,6], [8,9], [2,7]]
    vertices = 9
    graph = build_graph(edge_list, vertices)

    visited = [False] * (vertices + 1)
    traversal = list()

    isDFS = True
    
    if isDFS:
        # depth first search traversal on graph
        for v in range(1,vertices+1):
            if not visited[v]:
                dfs(v, visited, graph, traversal)
            
    # breadth first traversal on graph
    if not isDFS:
        queue = []
        for v in range(1, vertices+1):
            if not visited[v]:
                queue.append(v)
                visited[v] = True
                bfs(visited, graph, traversal, queue)
    
    print(traversal)