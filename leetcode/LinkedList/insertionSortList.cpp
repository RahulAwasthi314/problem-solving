/**
 * @file insertionSortList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/insertion-sort-list/
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

    ListNode* placeNode(ListNode* head, ListNode* key) {
        if (head == nullptr or key->val < head->val) {
            key->next = head;
            head = key;
            return head;
        }
        ListNode* temp = head;
        while (temp->next != nullptr and temp->next->val < key->val) {
            temp = temp->next;
        }
        key->next = temp->next;
        temp->next = key;
        return head;
    }
    void printList(ListNode* head) {
        ListNode* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr or head->next == nullptr) return head;
        ListNode* result = nullptr;
        while (head != nullptr) {

            ListNode* temp = head;
            head = head->next;
            temp->next = nullptr;
            result = placeNode(result, temp);

            // printList(result);
        }
        return result;
    }
};
