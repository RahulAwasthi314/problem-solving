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


// reservoir sampling method
// by treating it as the running time algo
// calculating probability based on running sum
class Solution2 {
    ListNode* list;
public:
    Solution2(ListNode* head) {
        list = head;
    }

    int getRandom() {
        ListNode* head = list;
        // if list contains only one node
        // the probablity of accessing that one is = 1.
        int r = head->val;
        int n = 1;
        head = head->next;
        while (head != nullptr) {
            // count the randomness based on the length of n.
            if (rand() % (n+1) == 0) r = head->val;
            head = head->next;
            n++;
        }
        return r;
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
