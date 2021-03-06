/**
 * @file AddTwoNumbersII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/add-two-numbers-ii/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        int carry = 0;
        int sum = 0;
        
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* result = nullptr;
        
        // push into stacks
        while (t1) {
            s1.push(t1->val);
            t1 = t1->next;
        }
        while (t2) {
            s2.push(t2->val);
            t2 = t2->next;
        }
        
        // pick tops and add them
        while (!s1.empty() or !s2.empty()) {
            sum = carry;
            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            
            int lastdigit = sum % 10;
            carry = sum / 10;
            
            
            ListNode* temp = result;
            result = new ListNode(lastdigit);
            result->next = temp;
        }
        if (carry != 0) {
            ListNode* temp = result;
            result = new ListNode(carry);
            result->next = temp;
        }
        // if any of the list is not empty
        while (!s1.empty()) {
            ListNode* temp = result;
            result = new ListNode(s1.top());
            result->next = temp;
            s1.pop();
        }
        while (!s2.empty()) {
            ListNode* temp = result;
            result = new ListNode(s2.top());
            result->next = temp;
            s2.pop();
        }
        return result;
    }
};