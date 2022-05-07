// dynamic adj_mat initialization

#include <iostream>
using namespace std;
int main() {
  int vertices = 4;
  int edge_list[][2] = {{1,2}, {1,3}, {1,4}, {2,1}, {2,4}, {3, 1}};

// adj_matrix initialization
  int **adj_matrix = new int * [vertices+1];
  for (int i = 0; i <= vertices; i++) {
    // using i = 1 will lead to seg fault if not handled properly later so i = 0 is safe for use
    adj_matrix[i] = new int[vertices + 1];
    for (int j = 0; j <= vertices; j++) {
      adj_matrix[i][j] = 0;
    }
  }

  for (int i = 0; i < 6; i++) {
    adj_matrix[edge_list[i][0]][edge_list[i][1]] = 1;
    adj_matrix[edge_list[i][1]][edge_list[i][0]] = 1;

  }

  for (int i = 1; i <=vertices; i++) {
    for (int j = 1; j <= vertices; j++) {
      cout << adj_matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
