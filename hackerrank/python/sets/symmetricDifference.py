"""
  @file symmetricDifference.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/symmetric-difference
    
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
m = int(input())
s1 = set(map(int, input().split()))
n = int(input())
s2 = set(map(int, input().split()))
s3 = s1.union(s2)
s4 = s1.intersection(s2)
s2 = sorted(list(s3 - s4))
for i in s2:
    print(i)
