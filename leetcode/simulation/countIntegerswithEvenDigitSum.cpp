/**
 * @file countIntegerswithEvenDigitSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/count-integers-with-even-digit-sum/
 * 
 */

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            int sum = 0;
            int n = i;
            while (n != 0) {
                sum += n%10;
                n /= 10;
            }
            if (sum%2 == 0) count++;
        }
        return count;
    }
};

/*
1
2
3
4
5
30
137
197
199
300
1000
*/