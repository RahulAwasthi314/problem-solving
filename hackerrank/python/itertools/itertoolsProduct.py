"""
  @file itertoolsProduct.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/itertools-product
"""

from itertools import product

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = product(a, b)
for i in c:
    print(i, end=" ")
