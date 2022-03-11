/**
 * @file validAnagram.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/valid-anagram/
 * 
 */

class Solution {
public:
    
    /*
     * brute force :    Time Complexity : atleast O(n * n!)
     * n : for verifying string, n! : to generate permutations
     * for each permut p of t:
     *      if (p == s) return true;
     * return false;
     */
    bool bruteForce(string s, string t) {
        return true;
    }
    
    
    /*
     * using frequency property of anagram.
     * if fre(s) == fre(t)
     *      return true
     */
    bool freMapMethod(string& s, string& t) {
        vector<int> sMap(26, 0), tMap(26, 0); // space : O(m) + O(m) = O(m)     m : number of alphabets in the language
        
        // preprocessing 
        for (char ch : s) sMap[ch-'a']++;   // Time : O(size of s)
        for (char ch : t) tMap[ch-'a']++;   // Time : O(size of s)
        
        
        for (int i = 0; i < 26; i++)        // Time : O(m)
            if (sMap[i] != tMap[i]) return false;
        return true;
    }
    
    // sorting according to discrete mathematical alphabets class
    // Time : O(n log n)  + O(m log m)  n, m : number of char in string
    bool preSorting(string& s, string& t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    
    bool isAnagram(string s, string t) {
        return preSorting(s, t);
        return freMapMethod(s, t);
    }
};

// new solution design technique without proper knowledge of solution
// NOTE: IMPROVMENT REQUIRED
class Solution {
    // mutation of the input variable
    bool bf(string& s, string& t) {
        sort(s.begin(), s.end());   // O(n logn)
        sort(s.begin(), t.end());   // O(n logn)
        return s == t;              // O(n)
    }
    
    bool hashtable(string& s, string& t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        for (char ch : s) smap[ch]++;
        for (char ch : t) tmap[ch]++;
        if (smap.size() != tmap.size()) return false;
        for (auto it : smap) {
            auto it2 = tmap.find(it.first);
            if(it2 == tmap.end()) {
                return false;
            } else if (it2->second != it.second) {
                return false;
            }
        }
        return true;
    }
public:
    bool isAnagram(string s, string t) {
        return hashtable(s, t);
    }
};

/**
"anagram"
"nagaram"
"abcd"
"abc"
"aaaaa"
"aaabb"
"a"
"b"
"a"
"a"
*/