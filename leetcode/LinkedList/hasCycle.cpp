/**
 * @file hasCycle.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out this problem here:
 * https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while (fastPtr) {
            if (fastPtr->next and fastPtr->next->next) {
                fastPtr = fastPtr->next->next;
                slowPtr = slowPtr->next;
            }
            else return false;
            if (slowPtr == fastPtr) {
                return true;
            }
        }
        return false;
        
    }
};