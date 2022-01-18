/**
 * @file mergekSortedLists.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/merge-k-sorted-lists/
 *
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
    int predicate (vector<ListNode*>& lists) {
        int s = lists.size();
        // initially the list elements are nullptr
        bool t = false;
        for (int i = 0; i < s; i++) {
            if (lists[i] != nullptr) return i;
        }
        return -1;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return nullptr;
        ListNode* result = new ListNode(-1);
        ListNode* temp = result;
        while (true) {
            int minIdx = predicate(lists);
            if (minIdx == -1) return lists->next;
            ListNode* minNode = lists[minIdx];
            int s = lists.size();
            for (int i = 1; i < s; i++) {
                if (lists[i] != nullptr) {
                    if (lists[i]->val < minNode->val) {
                        minNode = lists[i];
                        minIdx = i;
                    }
                }
            }
            temp->next = minNode;
            lists[minIdx] = lists[minIdx]->next;
        }
        return result->next;
    }
};



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// accepted solution
// runtime is O(n * k); n : number of nodes; k : number of lists
class Solution2 {
    int predicate (vector<ListNode*>& lists) {
        int s = lists.size();
        // initially the list elements are nullptr
        bool t = false;
        for (int i = 0; i < s; i++) {
            if (lists[i] != nullptr) return i;
        }
        return -1;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return nullptr;
        ListNode* result = new ListNode(-1);
        ListNode* temp = result;
        while (true) {
            int minIdx = predicate(lists);
            if (minIdx == -1) return result->next;
            ListNode* minNode = lists[minIdx];
            int s = lists.size();
            for (int i = 1; i < s; i++) {
                if (lists[i] != nullptr) {
                    if (lists[i]->val < minNode->val) {
                        minNode = lists[i];
                        minIdx = i;
                    }
                }
            }
            temp->next = minNode;
            temp = temp->next;
            lists[minIdx] = lists[minIdx]->next;
        }
        return result->next;
    }
};

// work on further approaches possible 

// using two sorted lists approach solve every time for two lists





// take all values push them into stack, sort them and insert them into new list. return list
// time complexity: O(n + n*logn) space required: O(n)

class Solution3 {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode(-1);
        ListNode* ptr = head;
        
        vector<int> s;
        
        if (lists.size() == 0) return nullptr;
        for (int i = 0; i < lists.size(); i++) {
            while (lists[i] != nullptr) {
                s.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            ptr->next = new ListNode(s[i]);
            ptr = ptr->next;
        }
        return head->next;
    }
};