/**
 * @file findDigits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/find-digits/
 * 
 */

https://www.hackerrank.com/challenges/find-digits/submissions/code/254425871

int findDigits(int n) {
    vector<int> a;
    int c = n;
    while (c) {
        if (c % 10) a.push_back(c%10);
        c /= 10;
    }
    int count = 0;
    for (int i : a) {
        if (n % i == 0) count++;
    }
    return count;

}