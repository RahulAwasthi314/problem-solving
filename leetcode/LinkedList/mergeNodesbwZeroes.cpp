/**
 * @file mergeNodesbwZeroes.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/merge-nodes-in-between-zeros/
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* h1 = new ListNode(0);
        ListNode* t = h1;
        ListNode* temp = head->next;
        while (temp) {
            int sum = 0;
            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }
            if (temp->val == 0) temp = temp->next;
            t->next = new ListNode(sum);
            t = t->next;
        }
        return h1->next;   
    }
};