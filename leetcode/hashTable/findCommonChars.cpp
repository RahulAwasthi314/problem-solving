/**
 * @file findCommonChars.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-common-characters/
 * 
 */


class Solution {
    
    // vector<string> notAcceptable(vector<string>& words) {
    //     int n = words.size();
    //     vector<int> fremap(26, 0);
    //     for (string s : words) {
    //         for (char ch : s) {
    //             fremap[ch-'a']++;
    //         }
    //     }
    //     vector<string> ans;
    //     for (int i = 0; i < 26; i++) {
    //         if (fremap[i] == n) {
    //             ans.push_back(to_string(i+'a'));
    //         }
    //     }
    //     return ans;
    // }
    
    // time: O(n*26)    space: O(n*26)
    vector<string> hashMapMethod(vector<string>& words) {
        int n = words.size();
        int fremap[n][26];
        memset(fremap, 0, n*26*sizeof(int));
        // set the frequency of char in map
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                fremap[i][words[i][j]-'a'] += 1;
                // cout << words[i][j] << " ";
            }
        }
    
        // print the fremap 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                cout << fremap[i][j] << " ";
            }
            cout << endl;
        }
        
        
        vector<string> ans;
        // check for same for each char
        for (int i = 0; i < 26; i++) {
            if (fremap[0][i]) {
                int val = fremap[0][i];
                for (int j = 1; j < n; j++) {
                    if (fremap[j][i] != val) {
                        val = min(val, fremap[j][i]);
                    }
                }
                if (val) {
                    while (val--) {
                        char zz = i + 'a';
                        string ss {zz};
                        cout << ss << " ";
                        ans.push_back(ss);
                    }
                }
            }
        }
        
        return ans;
    }
    
    
public:
    vector<string> commonChars(vector<string>& words) {
        return hashMapMethod(words);
    }
};