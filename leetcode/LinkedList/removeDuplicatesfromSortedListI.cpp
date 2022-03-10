/**
 * @file removeDuplicatesfromSortedListI.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 * 
 */

class Solution {

    ListNode* methodII(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        
        ListNode* temp = head;
        while (temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                ListNode* tempNode = temp->next;
                temp->next = temp->next->next;
                delete tempNode;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }

public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* t = head;
        while (temp) {
            while (t and temp->val == t->val) t = t->next;
            temp->next = t;
            temp = t;
        }
        return head;
    }
};

/*
[]
[1]
[1,2]
[1,3]
[1,1]
[1,1,2]
[1,2,3,4,5]
[1,1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,5,5,5]
*/