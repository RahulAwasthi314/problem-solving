"""
  @file listComprehension.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/list-comprehensions
    
"""
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    hel = [[x, y, z] for x in range(0, x + 1) for y in range(0, y + 1) for z in range(0, z + 1) if x+y+z != n]
    print(hel)
