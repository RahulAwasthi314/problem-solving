"""
 * @file dayOfProgrammer.py
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/day-of-the-programmer
 * 
 """


def julianLeap(year):
    if year % 4 == 0: return True
    else: return False

def gregLeap(year):
    # Write your logic here
    if (year % 4 ==  0 and year % 100 != 0) or year % 400 == 0:
        return True
    else:
        return False

def dayOfProgrammer(year):
    dayOfprogram = 256
    totalDays =  215
    if year < 1918:
        if julianLeap(year):
            totalDays += 29
        else:
            totalDays += 28
        ans = str(dayOfprogram - totalDays)
        ans += ".09." + str(year)
        return ans
    
    elif year > 1918:
        if gregLeap(year):
            totalDays += 29
        else:
            totalDays += 28
        ans = str(dayOfprogram - totalDays)
        ans += ".09." + str(year)
        return ans
    else:
        return "26.09.1918"
