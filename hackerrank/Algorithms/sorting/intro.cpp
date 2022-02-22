/**
 * @file intro.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/tutorial-intro/
 * 
 */

int introTutorial(int V, vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == V) return i;
    }
    return -1;
}