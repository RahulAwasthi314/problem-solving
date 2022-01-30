/**
 * @file aORbEqualsC.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/
 * 
 */

class Solution {
    // time: O(msb(a|b|c)) space: O(1)
    int enumerate(int a, int b. int c) {
        int count = 0;
        while (a or b or c) {
            int a1, b1, c1;
            a1 = a & 1;
            b1 = b & 1;
            c1 = c & 1;
            if ((a1 or b1)  == !c1) { count++;
                if ((a1 == 1) and (b1 == 1)) count++;
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return count;
    }
public:
    int minFlips(int a, int b, int c) {
        return enumerate(a, b. c);
    }
};