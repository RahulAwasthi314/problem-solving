/**
 * @file PalindromeLinkedList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        int size = 0;
        ListNode* temp = head;
        // count the nodes
        while (temp) {
            temp = temp->next;
            size++;
        }
        temp = head;
        // insert till k = size / 2;
        int i = 0;
        for (i = 0; i < size/2; i++) {
            s.push(temp->val);
            temp = temp->next;
        }

        // crucial condition for odd sized list
        if (size % 2 == 1) {i+=1; temp = temp->next;}

        // pop the elements now
        for (; i < size and temp; i++) {
            if (s.top() == temp->val) {
                cout << temp->val << " " << s.top() << endl;
                s.pop();
                temp = temp->next;
            }
            else {
                return false;
            }
        }
        // calculated length(LL) 
        // no need to put safety check for stack getting empty
        return true;
    }
};