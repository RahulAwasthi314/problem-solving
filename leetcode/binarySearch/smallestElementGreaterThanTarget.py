"""
 * @file smallestElementGreaterThanTarget.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 *
"""

class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        letters = list(set(letters))
        letters.sort()
        if (letters[-1] <= target):
            return letters[0]
        else:
            start, end = 0, len(letters) - 1
            while start < end:
                mid = start + (end - start) // 2;
                if letters[mid] == target:
                    return letters[mid+1]
                elif letters[mid] < target:
                    start = mid+1
                else:
                    end = mid
            return letters[start]




# ["e","e","e","e","e","e","n","n","n","n"]
# "e"
# ["e","e","e","e","e","e","n","n","n","n","n","n","n","n"]
# "f"
# ["c","f","j"]
# "a"
# ["c","f","j"]
# "c"
# ["c","f","j"]
# "d"
# ["c","f","j"]
# "j"
# ["b","d","f"]
# "g"
# ["g","t","v"]
# "z"
# ["c","f","j"]
# "a"
# ["c","f","j"]
# "f"
# ["c","f","j"]
# "j"
# ["c","f","j"]
# "j"
# ["b","d","f"]
# "h"
# ["g","t","v"]
# "z"
