"""
  @file loops.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/python-loops
    
"""

if __name__ == '__main__':
    n = int(input())
    x = [i*i for i in range(n)]
    for i in x:
        print(i)
    
