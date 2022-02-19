/**
 * @file utopianTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/utopian-tree/
 * 
 */

int utopianTree(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0) count++;
        else count *= 2;
    return count;
}