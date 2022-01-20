"""
  @file setDiscardRemovePop.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
      https://www.hackerrank.com/challenges/py-set-discard-remove-pop
    
"""

n = int(input())
s = set(map(int, input().split()))
m = int(input())
for i in range(m):
    l = list(map(str, input().split()))
    # if (l[1]):
    #     l[1] = int(l[1])
    if l[0] == 'pop':
        try:
            s.pop()
        except KeyError:
            print("KeyError: pop from empty set")
    else:
        l[1] = int(l[1])
        if l[0] == 'remove':
            try:
                s.remove(l[1])
            except KeyError:
                print("KeyError: ", l[1])
        elif l[0] == 'discard':
                s.discard(l[1])
print(sum(s))
