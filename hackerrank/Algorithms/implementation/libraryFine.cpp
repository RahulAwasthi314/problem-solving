/**
 * @file libraryFine.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/library-fine/
 * 
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 == y2) {
        if (m1 == m2) {
            if (d1 == d2) {
                return 0;
            } else if (d1 > d2) {
                return abs(d1 - d2) * 15;
            } else {
                return 0;
            }
        } else if (m1 > m2) {
            return abs(m1 - m2) * 500;
        }
    }
    else if (y1 > y2) return 10000;
    return 0;
}

// follow up: make a program to accpet two dates and print the diffrence b/w them in months, year, and days