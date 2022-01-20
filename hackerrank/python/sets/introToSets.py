"""
  @file introToSets.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/py-introduction-to-sets
    
"""

def average(array):
    # your code goes here
    array = set(array)
    return sum(array) / len(array)