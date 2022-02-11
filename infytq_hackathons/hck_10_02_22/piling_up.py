"""
link:
https://www.hackerrank.com/contests/h-cs3c-feb10/challenges/piling-up

"""
# def is_sorted(l):
#     flag = False
#     for i in range(1, len(l)):
#         if l[i-1] > l[i]:
#             flag = True
#         if l[i-1] < l[i] and flag:
#             return False
#     return False


# k = int(input())
# for i in range(k):
#     n = int(input())
#     l = list(map(int, input().split()))
#     if is_sorted(l):
#         print("Yes")
#     else:
#         print("No")

    


# Enter your code here. Read input from STDIN. Print output to STDOUT
# time: O(n) tle for larger inputs
import sys
n = int(input())
for _ in range(n):
    k = int(input())
    l = list(map(int, input().split()))
    i, j = 0, k-1
    minimum = sys.maxsize
    while (i <= j) :
        if max(l[i], l[j]) <= minimum:
            minimum =max(l[i], l[j])
            l.remove(minimum)
            j-=1
        else:
            print("No")
            break     
    if i > j:
        print("Yes")

# time: O(n)
for test in range(int(input())):
    n = int(input())
    values = list(map(int, input().split()))
    
    i = 0
    while i < n - 1 and values[i] >= values[i + 1]:
        i += 1
    while i < n - 1 and values[i] <= values[i + 1]:
        i += 1
        
    if i==n-1:
        print('Yes')
    else:
        print('No')