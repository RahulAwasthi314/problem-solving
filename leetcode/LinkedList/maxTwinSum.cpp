/**
 * @file maxTwinSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
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
        int cnt = 0;
        while (temp and ++cnt) {
            temp = temp->next;
        }
        return cnt;
    }
public:
    int pairSum(ListNode* head) {
        int len = length(head);
        ListNode* temp = head;
        int arr[len/2+1];
        memset(arr, 0, sizeof(arr));
        int cnt = 1;
        while (temp and cnt <= len/2) {
            arr[cnt] = temp->val;
            cnt++;
            temp = temp->next;
        }

        while (temp and cnt >= 1) {
            arr[cnt-1] += temp->val;
            cnt--;
            temp = temp->next;
        }
        int maxx = INT_MIN;
        for (int i = 1; i <= len/2; i++) {
            maxx = max(maxx, arr[i]);
        }
        return maxx;
    }
};
