"""
  @file findRunnerUp.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list
    
"""

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    temp = arr[-1]
    res = 0
    i = len(arr)-1
    while i >= 0:
        if arr[i] != temp:
            res = arr[i]
            break
        i -= 1
    print(res)
        
    
