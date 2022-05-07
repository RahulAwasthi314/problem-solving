#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isNodeExist(vector<int>& v, int val) {
  for (auto i : v) if (i == val) return true;
  return false;
}

map <int, vector<int>> build_graph(vector<vector<int>>& edge_list, int vertices) {
  map<int, vector<int>> adj_list;

  for (int i = 1; i <= vertices; i++) {
    vector<int> v;
    adj_list[i] = v;
  }

  for (auto edge: edge_list) {
    if (!isNodeExist(adj_list[edge[0]], edge[1])) adj_list[edge[0]].push_back(edge[1]);
    if (!isNodeExist(adj_list[edge[1]], edge[0])) adj_list[edge[1]].push_back(edge[0]);
  }
  return adj_list;
}

int main() {
  vector<vector<int>> edge_list = {{1,2}, {1,3}, {1,4}, {2,1}, {2,4}, {3, 1}};
  int  vertices = 4;
  map<int, vector<int>> adj_list = build_graph(edge_list, vertices);

  for (auto list : adj_list) {
    cout << list.first << " -> ";
    for (auto edge : list.second) {
      cout << edge << " ";
    } cout << endl;
  }
  return 0;
}
