/**
 * @file DeleteElements.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode(val - 1);
        temp->next = head;
        head = temp;
        while (temp) {
            if (temp->next == nullptr) break;
            if (temp->next != nullptr) {
                if (temp->next->val == val) {
                    ListNode* del = temp->next;
                    temp->next = del->next;
                }
                else temp = temp->next;
            }
        }
        return head->next;
    }
    ListNode* removeElements2(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        head = dummy;
        ListNode* temp = head;
        while (temp) {
            ListNode* t = temp->next;
            while (t and t->val == val) {
                t = t->next;
            }
            temp->next = t;
            temp = temp->next;
        }
        return head->next;
    }
};
