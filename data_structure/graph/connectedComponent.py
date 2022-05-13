# find connected component in a graph

# build undirected graph
def build_undirected_graph (edge_list, vertices):
    graph = dict()

    for vertex in range(vertices+1):
        graph[vertex] = list()

    for u, v in edge_list.items():
        graph[u].append(v)
        graph[v].append(u)

    return graph

def build_directed_graph(edge_list, vertices):
    graph = dict()

    for vertex in vertices:
        graph[vertex] = list()

    for u, v in edge_list.items():
        graph[u].append(v)

    return graph


def dfs(node, visited, graph):
    visited[node] = True
    for nbr in graph[node]:
        if not visited[nbr]:
            visited[nbr] = True
            dfs(nbr, visited, graph)


if __name__ == "__main__":
    edges_list = [[]]
    vertices = 0

    graph = build_undirected_graph(edge_list)

    totalComponents = 0

    # assuming the graph can have atleast one cycle
    # dfs traversal
    visited = [False] * for i in range(0, vertices+1)

    for node in range(1, vertices+1):
       if not visited[node]:
           totalComponents += 1
           dfs(node, visited, graph)

    if totalComponents == 1:
        print("Graph is connected")
    else:
        print(totalComponents, " are the total number of components in the graph")

    print("Program successfully")

