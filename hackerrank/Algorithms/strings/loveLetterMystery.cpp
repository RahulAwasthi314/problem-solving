/**
 * @file loveLetterMystery.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/the-love-letter-mystery/
 * 
 */

int theLoveLetterMystery(string s) {
    int val = 0
    for (int i = 0, j = s.size()-1; i < j; i++, j--) val += abs(s[i] - s[j]);
    return val;
}