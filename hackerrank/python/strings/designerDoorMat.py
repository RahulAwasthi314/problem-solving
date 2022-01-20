"""
  @file designerDoorMat.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/designer-door-mat

"""


N, M = map(int, input().split())
half_row = N // 2
l = half_row
j = 0
while l >= 1:
    print(l*3*"-" + (2 * j + 1) * ".|." + l*3*"-")
    l -= 1
    j += 1
l = half_row
print("WELCOME".center(M, '-'))
l = 1
while l <= half_row:
    print(l*3*"-" + (2 * j - 1) * ".|." + l*3*"-")
    l += 1
    j -= 1
    
