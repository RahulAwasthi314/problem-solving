"""
  @file pairs.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/pairs/
    
"""

def pairs(k, arr):
    # Write your code here
    arr = set(arr)
    return sum(1 for i in arr if i+k in arr)
