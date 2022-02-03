"""
 * @file timeConversion.py
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/time-conversion/
 * 
 """

def timeConversion(s):
    s = s.split(":")
    a = s[2]
    s[2] = a[:2]
    s.append(a[2:])
    timezone = s[3]
    hrs = int(s[0])
    
    if timezone == "AM" and hrs == 12:
        # make -12 in hrs ans then append
        hrs -= 12
    elif timezone == "PM" and hrs >= 1 and hrs <= 11:
        #make +12 in hrs and then append
        hrs += 12
    if hrs < 10:
        hrs = "0" + str(hrs) + ":"
    else: hrs = str(hrs) + ":"
    ans = hrs + ":".join(s[1:-1])
    return ans