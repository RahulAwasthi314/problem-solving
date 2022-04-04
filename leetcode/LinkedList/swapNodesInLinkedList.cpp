/**
 * @file swapNodesInLinkedList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
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
    int length(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while (temp) {
            temp = temp->next;
            len++;
        }
        return len;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int len = length(head);
        int temp = 0;
        ListNode* t = head;
        int st = k-1;
        int end = len-k;
        while (st--) {
            t = t->next;
        }
        ListNode* t2 = head;
        while (end--) {
            t2 = t2->next;
        }
        temp = t->val;
        t->val = t2->val;
        t2->val = temp;
        return head;
    }
};
