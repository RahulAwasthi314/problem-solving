/**
 * @file GetDecimalNumber.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/ 
 *
 */

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n = 0;
        ListNode* ptr = head;
        while (ptr != nullptr) {
            n <<= 1;
            n |= ptr->val;
            ptr = ptr->next;
        }
        return n;
    }
};