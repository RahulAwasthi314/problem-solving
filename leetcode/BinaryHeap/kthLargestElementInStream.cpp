/**
 * @file kthLargestElementInStream.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/kth-largest-element-in-a-stream/
 *
 */

class KthLargestBruteForce {
    vector<int> n;  // space: O(n)
    int k;
public:
    KthLargest(int k_, vector<int>& nums) {
        n = nums;
        k = k_;

    }

    int add(int val) {
        n.push_back(val);
        sort(n.begin(), n.end()); // time: O(n log n)
        // 10^4 calls to add
        // n elements at one instance
        // therefore total time required: 10^4 * n log n  where n => [0, 10^4]
        // 8 * 10^8. which is far more than 10^4
        // so TLE would be expected
        return n[n.size()-k];
    }
};

class KthLargestMinHeap {
    int k;
    priority_queue<int, vector<int>, greater<>> min_heap;

    void addElement(int num) {
        if (min_heap.size() < k) {
            min_heap.push(num);
        }
        else {
            if (min_heap.top() < num) {
                min_heap.pop(); min_heap.push(num);
            } else { /* do nothing */ }
        }
    }

public:
    KthLargest(int k_, vector<int>& nums) {
        k = k_;
        for (int i : nums) {
            addElement(i);
        }
    }

    int add(int val) {
        addElement(val);
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
