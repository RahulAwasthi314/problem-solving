/**
 * @file middleNode.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/middle-of-the-linked-list/
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

    int countNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++; temp = temp->next;
        }
        return count;
    }
    ListNode* bruteforce(ListNode* head) {
        int count = countNode(head);
        int middle = (count / 2.0) + 1;
        ListNode* ptr = head;
        for (int i = 1; i <= count; i++, ptr = ptr->next) 
            if (i == middle) return ptr;
        return nullptr;
    }


    ListNode* twoPointer(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        while (temp2 != nullptr and temp2->next != nullptr) {
            temp = temp->next;
            temp2 = temp2->next->next;
        }
        return temp;
    }

    
public:
    ListNode* middleNode(ListNode* head) {
        return twoPointer(head);
        return bruteforce(head);
    }
};
