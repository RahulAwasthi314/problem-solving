/**
 * @file hasCycleII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try put the problem here:
 * https://leetcode.com/problems/linked-list-cycle-ii/
 * 
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return head;
        // return nullptr not head. ;)
        if (!head->next) return nullptr;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }        
        if (fast != slow) return nullptr;
        slow = head;
        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};