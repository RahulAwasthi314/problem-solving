class Solution {
    // time: O(n^3) space: O(n^2)
    int bruteforce1(vector<int>& nums, int k) {
        int n = nums.size();
        bool flag = false;
        for (int i = 0; i < n; i++) {     // O(n)
            for (int j = i; j < n; j++) {          // O(n)
                // subarray [i, j]
                if (j - i >= 1) {
                    int sum = 0;
                    for (int k = i; k <= j; k++) {      // O(n)
                        sum += nums[k];
                    }
                    if (sum % k == 0) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        return flag;
    }

    int bruteforce11(vector<int>& nums, int k) {
        int n = nums.size();
        bool flag = false;
        for (int i = 0; i < n; i++) {     // O(n)
            for (int j = i+1; j < n; j++) {          // O(n)
                // subarray [i, j]
                int sum = 0;
                for (int k = i; k <= j; k++) {      // O(n)
                    sum += nums[k];
                }
                if (sum % k == 0) {
                    flag = true;
                    break;
                }
            }
        }
        return flag;
    }


    // time: O(n^2) space: O(1)
    int bruteforce2(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; i++) {     // O(n)
            int sum = 0;
            for (int j = i; j < n; j++) {          // O(n)
                // subarray [i, j]
                sum += nums[j];
                if (sum % k == 0 and (j-i) > 0)  cnt++;
            }
        }
        return cnt;
    }

    // time: O(n^2) space: O(n)
    int prefixSum(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        vector<int> pSum(n, 0);
        pSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pSum[i] = pSum[i-1] + nums[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = pSum[j] - ((i == 0) ? 0 : pSum[i-1]);
                if(sum % k == 0 and j - i > 0) cnt++;
            }
        }
        return cnt;
    }

    // time: O(n) space: O(n)
    int prefixSumHashTable(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        int pSum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i = 0; i < n; i++) {
            pSum = (pSum + nums[i]) % k;  // [-(k-1), k-1]
            if (pSum < 0) pSum += k;
            cnt += m[pSum];
            m[pSum]++;

        }
        for (int i = 0; i < n; i++) {
            if (nums[i]%k == 0) if (cnt > 0) cnt--;
        }
        return cnt;
    }

public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        return prefixSumHashTable(nums, k);
        return prefixSum(nums, k);
        return bruteforce2(nums, k);
        return bruteforce1(nums, k);
    }
};
/*
[23,2,6,4,7]
6
[23,2,6,4,7]
13
[3]
3
[3,3]
3
[3,3,3]
6
[0]
1
*/
