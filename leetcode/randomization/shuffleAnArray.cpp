class Solution {
    vector<int> arr;    //original
    vector<int> brr;
public:
    Solution(vector<int>& nums) {
        arr = nums; // deep copy
    }

    vector<int> reset() {
        return arr;
    }

    vector<int> shuffle() {
        brr = arr;
        if (brr.size() > 0) {
            int i = brr.size();
            while (i > 1) {
                int idx = rand()%i;
                swap(brr[idx], brr[i-1]);
                i--;
            }
        }
        return brr;
    }

};

 class Solution2 {
     vector<int> arr;    //original
     vector<int> brr;
 public:
     Solution2(vector<int>& nums) {
         arr = nums; // deep copy
     }

     vector<int> reset() {
         return arr;
     }

     vector<int> shuffle() {
         brr = arr;
         if (arr.size() > 0) {
             helper(brr, brr.size());
         }
         return brr;
     }

 private:
     void helper(vector<int>& v, int n) {
         if (n <= 1) return;
         int idx = rand()%n;
         swap(v[idx], v[n-1]);
         helper(v, n-1);
     }
 };
