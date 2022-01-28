"""

    @file powerOfThree.cpp
    @author Rahul Awasthi (awasthir@pm.me)

    @brief 
    try out the problem here:
    https://leetcode.com/problems/power-of-three

"""

def power_of_three(n):
    if (n < 1):return False
    while (n !=1):
        if (n % 3 == 1):
            return False
        n /= 3
    return True

x = [3**i for i in range(0, 12)]
print(x)
for i in x:
    print(power_of_three(i))