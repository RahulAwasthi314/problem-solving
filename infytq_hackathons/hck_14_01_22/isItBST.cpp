/**
 * @file isItBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/infytq-jan14/challenges/is-binary-search-tree
 *
 * https://www.hackerrank.com/challenges/is-binary-search-tree/problem
 */


/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

// inorder traversal of BST is always sorted.
void inorder(Node* root, vector<int>& s) {
    if (!root) return;
    inorder(root->left, s);
    s.push_back(root->data);
    inorder(root->right, s);
}

bool checkBST(Node* root) {
	vector<int> s;
	inorder(root, s);
	int size = s.size();
	for (int i = 1; i < size; i++) {
		if (s[i - 1] >= s[i]) return false;
	}
	return true;
}