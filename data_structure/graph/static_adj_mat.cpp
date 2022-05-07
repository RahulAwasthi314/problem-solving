/*
 *
 * static initialization of edges and vertices
 *
 */

#include <iostream>
#include <vector>
using namespace std;
void build_graph(int adj_mat[][5], vector<vector<int>>& edge_list, int vertices) {
  for (auto edge : edge_list) {
    adj_mat[edge[0]][edge[1]] = 1;
    adj_mat[edge[1]][edge[0]] = 1;
  }
}


int main() {
  int vertices = 4;
  vector<vector<int>> edge_list = {{1,2}, {1,3}, {1,4}, {2,1}, {2,4}, {3, 1}};

  int graph_adj_matrix[5][5] = {0};
  build_graph(graph_adj_matrix, edge_list, vertices);

  for (int i = 1; i <= vertices; i++) {
    for (int j = 1; j <= vertices; j++) {
      cout << graph_adj_matrix[i][j] << " ";
    } cout << endl;
  }
  return 0;
}

