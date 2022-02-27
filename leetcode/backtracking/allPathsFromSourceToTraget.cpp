/**
 * @file allPathsFromSourceToTraget.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/all-paths-from-source-to-target/
 * 
 */

class Solution {
    void findPossiblePaths(int src, int dest, vector<vector<int>>& graph, vector<int>& curr_path, vector<vector<int>>&  allPaths) {
        if (src == dest) {
            allPaths.push_back(curr_path);
            return;
        }
        if (graph[src].empty()) {return;}
        // iterate through the adjacency list of current node
        for (int neighbor: graph[src]) {
            // findAllPossible Paths from this subProblem space
            curr_path.push_back(neighbor);
            findPossiblePaths(neighbor, dest, graph, curr_path, allPaths);
            curr_path.pop_back();
        }
    }
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> curr_path;
        vector<vector<int>> allPaths;
        if (graph.size() == 0) return allPaths;
        curr_path.push_back(0);
        // findPossiblePaths(src, dest, graph, curr_path, allPaths);
        findPossiblePaths(0, graph.size()-1, graph, curr_path, allPaths);
        return allPaths;
        // for count of allPaths count
        return allPaths.size();
    }
};



// count all paths from source ot target
class Solution2 {
    void findPossiblePaths(int src, int dest, vector<vector<int>>& graph, int& count) {
        if (src == dest) {
            count++;
            return;
        }
        if (graph[src].empty()) {return;}
        // iterate through the adjacency list of current node
        for (int neighbor: graph[src]) {
            // findAllPossible Paths from this subProblem space
            findPossiblePaths(neighbor, dest, graph, curr_path, count);
        }
    }

    // head recursive approach
    // return number of paths from src to dest
    int backtrack(int src, int dest, vector<vector<int>>& graph) {
        if (src == dest) return 1;
        
        // iterate through the adjacency list of current node
        int count = 0;
        for (int neighbor: graph[src]) {
            // findAllPossible Paths from this subProblem space
            count = backtrack(neighbor, dest, graph, curr_path, allPaths);
        }
        return count;
    }

    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int count = 0;
        if (graph.size() == 0) return count;
        // findPossiblePaths(src, dest, graph, curr_path, count);
        findPossiblePaths(0, graph.size()-1, graph, count);
        return count;
        return backtrack(0, graph.size()-1, graph);
    }
};