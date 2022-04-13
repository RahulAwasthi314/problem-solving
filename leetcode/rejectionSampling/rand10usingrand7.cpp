/**
 * @file rand10usingrand7.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/implement-rand10-using-rand7/
 *
 */

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
    int cnt_rand10 = 1;
    int cnt_rand7 = 2;
// monte carlo method
// use the resources as less you can
// be precise as you can
    int rand10MonteCarlo() {
        return 0;
    }

// las vegas method : rejection sampling method
// use much resource to minimize the probability as you can
// be precise as you can
//time : O(1) avg. O(inf) worst
    int rand10LasVegas() {
        int num = 7 * (rand7() - 1) + (rand7() - 1);
        if (num < 40) {
            return num%10 + 1;
        } else return rand10LasVegas();
    }
    int lasVegasII() {
        int r, c, num;
        do {
            r = rand7();
            c = rand7();
            num= c + (r - 1) * 7;
        } while (num > 40);
        return 1 + (num) % 10;
    }

public:
    int rand10() {
        return lasVegasII();
        return rand10LasVegas();
    }
};
