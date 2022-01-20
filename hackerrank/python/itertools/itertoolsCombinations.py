"""
  @file itertoolsCombinations.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/itertools-combinations

"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
s = list(map(str, input().split()))
n = int(s[1])
s = s[0]
x = []
for i in range(1, n+1):
    x.append(list((combinations(sorted(s), i))))
for z in x:
    for i in z:
        print("".join(list(i)))
