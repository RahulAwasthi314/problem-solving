/**
 * @file LinkedListRandomNode.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/linked-list-random-node/
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

// brute force approach
class Solution {
private:    
    ListNode* ptr;
    int size = 0;
public:
    Solution(ListNode* head) {
        ptr = head;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        ListNode* temp = ptr;
        int random = rand() % size;
        while(random--) temp = temp->next;
        return temp->val;
    }
};

// solve follow up approaches here
// ...


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */