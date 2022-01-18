/**
 * @file swapNodePairs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/swap-nodes-in-pairs/
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
    
    // recursive approach
    void recursiveSwap(ListNode* head) {
        if (head->next == nullptr ) return;
        if (head->next->next == nullptr) return;
        
        ListNode* temp1 = head->next;
        ListNode* temp2 = temp1->next;
        ListNode* temp3 = temp2->next;
        
        head->next = temp2;
        temp2->next = temp1;
        temp1->next = temp3;
        recursiveSwap(temp1);
        return;
    }
    
    // iterative approach
    ListNode* iterativeSwap(ListNode* head) {
        if (head == nullptr ) return nullptr;
        if (head->next == nullptr) return head;
        ListNode* result = head->next;
        ListNode* pre = new ListNode(-1);
        pre->next = head;
        ListNode* temp1 = head;
        while (temp1 && temp1->next) {
            ListNode* temp2 = temp1->next;
            ListNode* temp3 = temp1->next->next;
            pre->next = temp2;
            temp2->next = temp1;
            temp1->next = temp3;
            pre = temp1;
            temp1 = temp3;
        }
        return result;
    }
    
    
    
    // recursive approach
public:
    ListNode* swapPairs(ListNode* head) {
        // return iterativeSwap(head);
        
        ListNode* temp = new ListNode(-1);
        temp->next = head;
        recursiveSwap(temp);
        return temp->next;
    }
};