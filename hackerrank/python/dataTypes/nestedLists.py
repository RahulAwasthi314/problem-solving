"""
  @file nestedLists.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/nested-list
    
"""

n = int(input())
a = [[raw_input(), float(input())] for _ in range(n)]
a.sort(key = lambda x : x[1])
# find 2nd lowest
min = a[0][1]
#print(min)
min2 = min
for i in a:
    if i[1] <= min:
        continue
    else:
        min2 = i[1]
        break
for i in sorted(a):
    if min2 < i[1]:
        continue
    elif min2 > i[1]:
        continue
    else:
        print(i[0])
