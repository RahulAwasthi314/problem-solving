"""
  @file splitJoin.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/python-string-split-and-join
    
"""


def split_and_join(line):
    # write your code here
    s = line.split(" ")
    s = "-".join(s)
    return s