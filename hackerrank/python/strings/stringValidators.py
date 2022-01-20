"""
  @file stringValidators.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/find-a-string

"""


# alphanumeric
# alphabetic
# digit
# lowercase
# uppercase

if __name__ == '__main__':
    s = input()
    isAlnum = False
    isAlpha = False
    isDigit = False
    isUpper = False
    isLower = False
    for i in range(len(s)):
        if s[i].isalnum() == True:
            isAlnum = True
        if s[i].isalpha() == True:
            isAlpha = True
        if s[i].isdigit() == True:
            isDigit = True
        if s[i].islower() == True:
            isLower = True
        if s[i].isupper() == True:
            isUpper = True
    print(isAlnum)
    print(isAlpha)
    print(isDigit)
    print(isLower)
    print(isUpper)
