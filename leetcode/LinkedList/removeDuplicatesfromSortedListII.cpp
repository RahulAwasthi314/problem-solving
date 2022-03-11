/**
 * @file removeDuplicatesfromSortedListII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head; head = dummy;
        ListNode* temp = head;
        while (temp and temp->next) {
            ListNode* t1 = temp->next;
            ListNode* t = t1->next;
            int a = t1->val, c = 0;
            while (t and t->val == a) {
                t = t->next; c++;
            }
            if (c == 0) {
                temp->next = t1; temp = t1; continue;
            }
            temp->next = t;
            // t1 = t;
        }
        return head->next;
    }
};

/*

[1,1]           []
[1,1,1,1]       []
[1,2,2]         [1]
[1,1,2,2]       []

[1,2,3,4,5,6]   [1,2,3,4,5,6]
[1,1,1,1,1]     []

*/