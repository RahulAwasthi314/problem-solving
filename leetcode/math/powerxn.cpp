/**
 * @file countSortedVowelStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 https://leetcode.com/problems/powx-n/
 *
 */


class Solution {

    double pow(double x, int n) {
        if (n == 0) return 1;
        double t = pow (x, n/2);
        if ((n&1) == 0) {
            return t * t;
        } else {
            return x * t * t;
        }
    }

public:
    double myPow(double x, int n) {
        if ( n >= 0) return pow(x, n);
        unsigned b = n;
        return 1/pow(x, b);
    }
};
/*
2.00000
-2
2.10000
3
2.00000
10
-1.00000
2147483647
1.00000
2147483647
2.00000
-2147483648
*/

/*
-99
-2147482648
*/
