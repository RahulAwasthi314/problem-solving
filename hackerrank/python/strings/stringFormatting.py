"""
  @file stringFormatting.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/python-string-formatting
"""

def print_formatted(number):
    # your code goes here
    width = len(bin(number).replace("0b", ""))
    for i in range(1,number + 1):
        ls = str(i).rjust(width, " ")
        ls1 = str(oct(i).replace("0o", "")).rjust(width, " ")
        ls2 = str(hex(i).replace("0x", "")).rjust(width, " ")
        ls3 = str(bin(i).replace("0b", "")).rjust(width, " ")
        print(f"{ls} {ls1} {ls2.upper()} {ls3}")

