# for directed edges
def directed_adj(n, edges):
    graph=dict()

    for vertex in range(n):
        graph[vertex] = list()

    for edge in edges:
        if edge[1] not in graph[edge[0]]:
            graph[edge[0]].append(edge[1])

    print("Directed adjacency list")
    for v, e in graph.items():
        print(v , " --> " , e)


# for undirected edges
def undirected_adj(n, edges):
    graph = dict()

    for vertex in range(n):
        graph[vertex] = list()

    for edge in edges:
        if edge[1] not in graph[edge[0]]:
            graph[edge[0]].append(edge[1])
        if edge[0] not in graph[edge[1]]:
            graph[edge[1]].append(edge[0])

    print("\nUndirected AdjacencyList")
    for v, e in graph.items():
        print(v , " --> " , e)

if __name__=="__main__":
    edges = [[0,1],[1,0],[1,2],[1,3],[0,3],[2,3],[3,0],[3,2],[3,2]]
    n = 4
    directed_adj(n, edges)
    undirected_adj(n, edges)

# inserting and deleting an edge in the adjacency matrix
