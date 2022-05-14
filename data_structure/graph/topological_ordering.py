# topological ordering
# applied on Directed Acyclic Graph

def build_DAG(edge_list, vertices):

    graph = dict()

    for v in range(vertices):
        graph[v] = list()

    for u, v in edge_list:
        graph[u].append(v)

    return graph


def topological_ordering(graph):
    dependency_track = dict()

    # make the dependency_track by visiting the adjacency list
    for u, v in graph.items():
        dependency_track[u] = 0

    for u, nbr in graph.items():
        for node in nbr:
            dependency_track[node] += 1
    #return dependency_track

    queue = []
    # push the nodes from dependency_track having dependency = 0
    for node in dependency_track:
        if dependency_track[node] == 0:
            queue.append(node)

    dependency_order = []

    while (len(queue) > 0):
        node = queue[0]
        queue.remove(node)
        dependency_order.append(node)

        for child in graph[node]:
            dependency_track[child] -= 1
            if dependency_track[child] == 0:
                queue.append(child)

    return dependency_order


if __name__ == "__main__":
    edge_list = [[6, 4], [6, 2], [5, 3], [5, 4], [3, 0], [3, 1], [3, 2], [4, 1]]
    vertices = 7
    graph = build_DAG (edge_list, vertices)

    print(graph)

    topological_order = topological_ordering(graph)
    print(topological_order)
