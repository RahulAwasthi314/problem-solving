/**
 * @file removeNthNodefromList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    
    int count_node(ListNode* head) {
        int count = 0;
        ListNode* t = head;
        while (t != nullptr) {
            t = t->next;
            count++;
        }
        return count;
    }
    
    ListNode* bruteforce(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        head = dummy;
        
        // count the nodes in the list
        int cnt = count_node(head) - n;
        // and remove the (n - i)th node from the list
        ListNode* temp = head;
        while (cnt != 1) {
            temp = temp->next;
            cnt--;
        }
        ListNode* delNode = temp->next;
        temp->next = delNode->next;
        // return the head
        return head->next;
    }
    
    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return bruteforce(head, n);
    }
};


class Solution2 {
public:
    int len(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return head;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return head;
        }
        else {
            int length = len(head);
            int it = length - n;
            if (length == n) {
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
            ListNode* temp = head;
            for(int i = 0; i < it-1; i++) {
                temp = temp->next;
            }
            ListNode* temp1;
            temp1 = temp->next->next;
            delete temp->next;
            temp->next = temp1;
        }
        return head;
    }
};