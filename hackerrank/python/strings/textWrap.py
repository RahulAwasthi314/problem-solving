"""
  @file textWrap.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/text-wrap
"""

def wrap(string, max_width):
    ls = textwrap.wrap(string, max_width)
    for i in ls:
        print(i)
    return ""
    
    