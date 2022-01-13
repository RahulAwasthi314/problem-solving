/**
 * @file lca.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * hackathon link:
 * https://www.hackerrank.com/contests/infytq-jan13/challenges/binary-search-tree-lowest-common-ancestor
 *
 */

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
Node* return_lca(Node* root, int a, int b) {
    if (!root) return nullptr;
    if (b < root->data) return return_lca(root->left, a, b);
    else if (a > root->data) return return_lca(root->right, a, b);
    else return root;
}
  
Node *lca(Node *root, int v1,int v2) {
    // Write your code here.
    int min_val = min(v1, v2);
    int max_val = max(v1, v2);
    return return_lca(root, min_val, max_val);
    
}