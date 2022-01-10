/**
 * @file oddEvenList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return head;
        if (!head->next) return head;
        if (!head->next->next) return head;
        
        ListNode *temp = head;
        ListNode *oddList = head, *oddptr = oddList;
        ListNode *evenList = head->next, *evenptr = evenList;
        
        int count = 1;
        
        temp = temp->next->next;
        
        while (temp) {
            if (count % 2 == 1) {
                oddptr->next = temp;
                evenptr->next = temp->next;
                oddptr = oddptr->next;
                evenptr = evenptr->next;
            }
            temp = temp->next;
            count++;
        }
        oddptr->next = evenList;
        return head;
    }
};

// reduce these complexities