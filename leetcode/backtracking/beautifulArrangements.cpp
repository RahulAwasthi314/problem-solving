/**
 * @file beautifulArrangements.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/beautiful-arrangement/
 * 
 */

/*
        GIVING TLE 
        but the logic is correct
        think about more comapact way of solving the problem 
        i think i am going with labourous work 
        instead of smart work
*/


// exhaustive search solution
class Solution {
    
    bool isBeautiful(vector<int>& vec) {
        for (int i = 0; i < vec.size(); i++) {
            if ((vec[i]%(i+1) == 0) or ((i+1)%vec[i] == 0)) {
                continue;
            }
            else {return false;}
        }
        return true;
    }
    
    int bruteforce(int n) {
        int ans = 0;
        // generating the vector
        vector<int> vec(n);
        for (int i = 0; i < vec.size(); i++) vec[i] = i+1;
        
        // all possible permutations
        vector<bool> available(n, true);
        vector<int> currPermute;
        vector<vector<int>> allPermutes;
        permute(vec, 0, available, currPermute, allPermutes);

        // enumerate allPermute to check isBeautiful
        for (auto& vect : allPermutes) {
            if (isBeautiful(vect)) ans++;
            // print for checking
            for (auto i : vect) cout << i << " ";
            cout << endl;
            
        }
        return ans;
    }
    
    void permute(vector<int>& vec, int pos, vector<bool>& available, vector<int>& currPermute, vector<vector<int>>& allPermutes) {
        if (pos == vec.size()) {
            allPermutes.push_back(currPermute);
            return;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (available[i])  {
                currPermute.push_back(vec[i]);
                available[i] = false;
                permute(vec, pos+1, available, currPermute, allPermutes);
                currPermute.pop_back();
                available[i] = true;
            }
        }
    }
    
public:
    int countArrangement(int n) {
        return bruteforce(n);
    }
};




// SOLUTION OF BRANCH PRUNING
// if any branch is having any of element that is not beautiful prune that whole branch
class Solution {
public:
    int countArrangement(int n) {
        return 0;
    }
};





class Solution {
    
    
   void permute(vector<int>& vec, int pos, vector<bool>& available, vector<int>& currPermute, int& ans) {
        if (currPermute.size() == vec.size() ) {
            ans++;
            return;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (available[i])  {
                if ((vec[i]%(i+1) == 0) or ((i+1)%vec[i] == 0)) {
                    currPermute.push_back(vec[i]);
                    available[i] = false;
                    permute(vec, pos+1, available, currPermute, ans);
                    currPermute.pop_back();
                    available[i] = true;
                }
            }
        }
   }
    
    
    int bruteforce(int n) {
        int ans = 0;
        // generating the vector
        vector<int> vec(n);
        for (int i = 0; i < vec.size(); i++) vec[i] = i+1;
        
        // all possible permutations
        vector<bool> available(n, true);
        vector<int> currPermute;
        permute(vec, 0, available, currPermute, ans);

        
        return ans;
    }
    
public:
    int countArrangement(int n) {
        return bruteforce(n);
    }
};

// optimized time limit solution
class Solution {
    
   void permute(int& p, vector<bool>& available, int& ans, int n) {
        if (p == n) {
            ans++;
            return;
        }
        for (int i = 1; i <= n; i++) {
            if (available[i])  {
                if ((i%(p+1) == 0) or ((p+1)%i == 0)) {
                    ++p;
                    available[i] = false;
                    permute(p, available, ans, n);
                    --p;
                    available[i] = true;
                }
            }
        }
   }
    
    int bruteforce(int n) {
        int ans = 0;
        int p = 0;
        // all possible permutations
        vector<bool> available(n+1, true);
        permute(p, available, ans, n);
        return ans;
    }
    
public:
    int countArrangement(int n) {
        return bruteforce(n);
    }
};