/**
 * @file partitionList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/partition-list/
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* p1 = new ListNode(0);
        ListNode* p2 = new ListNode(0);
        
        ListNode* ptr1 = p1;
        ListNode* ptr2 = p2;
        
        ListNode* temp = head;
        
        while (temp != nullptr) {
            if (temp->val >= x) {
                ptr1->next = temp;
                ptr1 = ptr1->next;
            } else {
                ptr2->next = temp;
                ptr2 = ptr2->next;
            }
            temp = temp->next;
        }
        ptr2->next = p1->next;
        // crucial step 
        // taken one hour after address sanitization ;)
        ptr1->next = nullptr;
        
        return p2->next;
    }
};