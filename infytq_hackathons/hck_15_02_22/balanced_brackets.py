"""
 * @file balanced_brackets.py
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/h-cs3c-feb15/challenges/balanced-brackets
 *
 """

def isBalanced(s):
    op = ['[', '{', '(']
    close = [']', '}', ')']
    stack = []
    if s[0] in close:
        return "NO"
    # Write your code here
    
    for i in s:
        if i in op:
            stack.append(i)
        else:
            if i in close:
                # and it's corresponding index in closing 
                if  len(stack) and close[op.index(stack[-1])] == i:
                    stack.pop()
                else: return "NO"
            else:
                stack.append(i)
    if len(stack) == 0:
        return "YES"
    else:
        return "NO"