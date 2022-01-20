"""
  @file writeFunction.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/write-a-function
"""


def is_leap(year):
    # Write your logic here
    if (year % 4 ==  0 and year % 100 != 0) or year % 400 == 0:
        return True
    else:
        return False
