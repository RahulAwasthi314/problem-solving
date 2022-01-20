"""
  @file mutations.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/python-mutations
    
"""

def mutate_string(string, position, character):
    string = string[:position] + character + string[(position + 1) : ]
    return string
