/**
 * @file IsItBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * 
 */


/*
The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

// FIRST BRUTE FORCE APPROACH
bool bfs_checkBST(Node* root) {
    if (root == nullptr)  return true;

    if (root->left == nullptr and root->right == nullptr) {
        return true;
    }

    if (root->left == nullptr
        and 
        ( (root->right) and root->right->data > root->data)) {
        return bfs_checkBST(root->right);
    }

    if ( (root->left and root->left->data <= root->data) 
        and
        root->right == nullptr) {
        return bfs_checkBST(root->left);
    }

    if ( (root->left and root->left->data <= root->data)
        and
        ( (root->right) and root->right->data > root->data)) {
        return bfs_checkBST(root->left) and bfs_checkBST(root->right);
    }

    return false;
}


// SECOND APPROACH
bool check_BST(Node* root) {

    if (root == nullptr) return true;

    if (root->left == nullptr) return check_BST(root->right);
    else if (root->left->data < root->data) return check_BST(root->right);

    if (root->right == nullptr) return check_BST(root->left);
    else if (root->right->data > root->data) return check_BST(root->left);

    if (root->left and root->right) {
        if (root->left->data < root->data and root->right->data > root->data) {
            return check_BST(root->left) and check_BST(root->right);
        }
        else return false;
    }
    return false;
}

// REALIZATION OF ALL ABOVE APPROACHES ARE WRONG
// now implementing the concept based on insertion in BST.
bool checking_helper(Node* root, Node* curr) {
    if (root->data < curr->data) {
        return checking_helper(root->left, curr);
    }
    else {
        return checking_helper(root->right, curr);
    }
}
bool checkBST(Node* root) {
    if (root == nullptr) return true;
    return checking_helper(root->left)and checking_helper(root->right);
}

/**
 *

     2

    1 2 4 3 5 6 7
    NO


    2

    1 2 3 5 4 6 7
    NO
 */



 // after hackathon college discussion on 15/01/2022
 

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