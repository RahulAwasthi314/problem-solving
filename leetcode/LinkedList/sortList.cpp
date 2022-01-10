/**
 * @file sortList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/sort-list/
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
public:
    ListNode* sortList(ListNode* head) {
        vector<int> t;
        
        ListNode* temp = head;
        int size = 0;
        while (temp) {
            t.push_back(temp->val);
            temp = temp->next;
            size++;
        }
        sort(t.begin(), t.end());
        head = new ListNode(0);
        ListNode* t2 = head;
        for (int i = 0; i < size; i++) {
            t2->next = new ListNode(t[i]);
            t2 = t2->next;
        }
        return head->next;
    }
};

// try to solve it using space: O(1), time: O(n logn)