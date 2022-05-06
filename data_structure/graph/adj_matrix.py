# for directed edges

def directed_adj(n, edges):
    adj_mat = [[0 for i in range(n)] for i in range(n)]

    for edge in edges:
        adj_mat[edge[0]][edge[1]] = 1

    print("Directed adjacency list")
    for row in adj_mat:
        print(row)

# for undirected edges
def undirected_adj(n, edges):
    adj_mat = [[0 for i in range(n)] for i in range(n)]

    for edge in edges:
        adj_mat[edge[0]][edge[1]] = 1
        adj_mat[edge[1]][edge[0]] = 1

    print("\nUndirected AdjacencyList")
    for row in adj_mat:
        print(row)


if __name__=="__main__":
    edges = [[0,1],[1,0],[1,2],[1,3],[0,3],[2,3],[3,0],[3,2]]
    n = 4
    directed_adj(n, edges)
    undirected_adj(n, edges)


# inserting and deleting an edge in the adjacency matrix
