/**
 * @file countOddsInInterval.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
 * 
 */

class Solution {

    int btf(int low, int high) {
        // if low:odd,      high: odd
        if (low&1 and high&1) return (high - low )/2 +1;
        // if low:even,     high:even
        if (!(low&1) and !(high&1)) return (high - low)/2;
        // if low:even,     high: odd
        if (!(low&1) and high&1) return (high - low )/2 +1;
        // if low:odd,      high: even
        if (low&1 and !(high&1)) return (high - low )/2 +1;
        return 0;
    }

    int optimal (int low, int high) {
        if (!(low&1) and !(high&1)) return (high - low)/2;
        else return (high - low )/2 +1;
    }
public:
    int countOdds(int low, int high) {
        return optimal(low, high);
    }
};