/**
 * @file nextGreaterNode.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/next-greater-node-in-linked-list/
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while (temp) {
            ListNode* t = temp->next;
            while (t and t->val <= temp->val) {
                t = t->next;
            }
            if (t == nullptr) ans.push_back(0);
            else ans.push_back(t->val);
            temp = temp->next;
        }
        return ans;
    }
