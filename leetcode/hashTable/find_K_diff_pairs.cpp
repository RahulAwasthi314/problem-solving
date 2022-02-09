class Solution {

// brute force 
// time: O(n^3)
struct compare {
    bool operator()(pair<int, int>& A, pair<int, int>& B) {
        if ((A.first == B.second) or (A.first == B.first)) {
            if ((A.second == B.first) or (A.second == B.second)) {
                return true;
            }
        }
        return false;
    }
} cmp;

int bruteforce(vector<int>& nums, int k) {
    vector<pair<int, int>> ans;
        set<int> buffer;
        for (auto i : nums) {
            buffer.insert(i);
        }
        
        
        for (auto i : nums) {
            for (auto j : nums) {
                if (abs(i - j) == k) {
                    for 
                }
            }
        }
        for (auto i : ans) {
            cout << i.first << " " << i.second << "\n";
        }
        return 0;
}



public:
    int findPairs(vector<int>& nums, int k) {
        
    }
};