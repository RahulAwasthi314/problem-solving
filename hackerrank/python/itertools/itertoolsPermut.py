"""
  @file itertoolsPermut.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/itertools-permutations

"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
s = list(map(str, input().split()))
n = int(s[1])
s = str(s[0])
p = list(permutations(s, n))

j = []
for t in p:
    x = "".join(t)
    j.append(x)
j = sorted(j)
for i in j:
    print(i)
