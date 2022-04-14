/**
 * @file firstBadVersion.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/first-bad-version/
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        while (true) {
            int mid = start + (end - start)/2;
            bool a = isBadVersion(mid-1);
            bool b = isBadVersion(mid);
            bool c = isBadVersion(mid+1);

            if (a == true and b == true and c == true) {
                end = mid-1;
            } else if (a == false and b == false and c == false) {
                start = mid+1;
            }
            else if (a == false and b == false and c == true) {
                return mid+1;
            }
            else {
                return mid;
            }
        }
        return 1;
    }
};

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution2 {
    
    // divide the range by getting the first true in the range
    // do this while the range length becomes one
    // if the isBadVersion(n) == T
    //      the left part is containing the first instance including the current
    // else
    //      the right part is containing the firstBadVersion excluding the current

public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (isBadVersion(mid) == true) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;


    }
};
