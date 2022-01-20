"""
  @file setAdd.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/py-set-add
    
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
s = set()
for i in range(n):
    s.add(input())

print(len(s))
