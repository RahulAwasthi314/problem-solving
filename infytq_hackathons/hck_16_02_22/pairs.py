"""
 * @file pairs.py
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/h-cs3c-feb16/challenges/pairs
 *
 """

def pairs(k, arr):
    # Write your code here
    arr = set(arr)
    return sum(1 for i in arr if i + k in arr)
