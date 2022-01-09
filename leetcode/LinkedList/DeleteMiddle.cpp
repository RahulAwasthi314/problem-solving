/**
 * @file DeleteMiddle.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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
    ListNode* deleteMiddle(ListNode* head) {
        // found middle
        if (head->next == nullptr) return nullptr;
        ListNode* fastptr = head;
        ListNode* slowptr = head;
        ListNode* pre = nullptr;
        
        while (fastptr != nullptr and fastptr->next != nullptr) {
            pre = slowptr;
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
        pre->next = slowptr->next;
        return head;
    }
};