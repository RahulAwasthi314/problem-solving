/**
 * @file beautifulDays.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/
 * 
 */

int rev(int n) {
    int res = 0;
    while (n) {
        res = (res * 10) + (n % 10);
        n /= 10;
    }
    return res;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for ( int n = i; n <= j; n++) {
        // get the reverse
        int r1 = rev(n);
        // find abs
        // check if result % k
        if ((abs(r1 - n) % k) == 0) count++;
    }
    return count;

}
