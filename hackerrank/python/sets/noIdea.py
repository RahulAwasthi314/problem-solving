"""
  @file noIdea.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/no-idea
    
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, input().split())
arr = list(map(int, input().split()))
s1 = set(map(int, input().split()))
s2 = set(map(int, input().split()))

counter = 0
for i in arr:
    if i in s1:
        counter += 1
    elif i in s2:
        counter -= 1
print(counter)
