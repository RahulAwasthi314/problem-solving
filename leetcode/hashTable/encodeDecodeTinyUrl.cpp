/**
 * @file encodeDecodeTinyUrl.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/encode-and-decode-tinyurl/
 *
 */

class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
       string s;
       for (int i = 0; i < longUrl.size(); i++) {
           s += longUrl[i] + 1;
       }
       return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       string s;
       for (int i = 0; i < shortUrl.size(); i++) {
           s += shortUrl[i] -1;
       }
       return s;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
