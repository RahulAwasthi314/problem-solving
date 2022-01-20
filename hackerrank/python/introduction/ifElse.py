"""
  @file ifElse.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/py-if-else

"""

num = int(input())
check_wierd = num%2
if check_wierd is not 0:
    print("Weird")
elif (num>=2 and num <= 5) or num > 20:
    print("Not Weird")
else:
    print("Weird")
