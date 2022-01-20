"""
  @file capitalize.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/capitalize
    
"""


# Complete the solve function below.
def solve(s):
    s = list(s)
    for i in range(len(s)):
        if i == 0 or s[i-1] == ' ':
            s[i] = s[i].upper()
    s = "".join(s)
    return (s)