"""
  @file findString.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/find-a-string
    
"""

def count_substring(string, sub_string):
    c = 0
    for i in range(len(string)-len(sub_string) + 1):
        if string[i: i + len(sub_string)] == sub_string:
            c += 1
    return c
