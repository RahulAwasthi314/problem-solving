"""
  @file orderedDict.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/py-collections-ordereddict
      
"""


from collections import OrderedDict

d = OrderedDict()

n = int(input())
temp = list()
for i in range(n):
    lst = input().split()
    if len(lst) == 3:
        st = str(lst[0])+ " " + str(lst[1])
    if len(lst) == 2:
        st = str(lst[0])
    if st in d:
        d[st] = d[st]+int(lst[-1])
    else:
        d[st] = int(lst[-1])

for k, v in d.items():
    print(k, v)
    
    
