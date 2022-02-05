/**
 * @file insectionOfTwoLists.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    // Time Complexity: O(n * m)    Space: O(1)
    // iterate through each node in the both lists and check whether 
    // first temp node equal to the second temp node
    ListNode* bruteForce(ListNode* headA, ListNode* headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while (temp1 != nullptr) {
            while (temp2 != nullptr) {
                if (temp1 == temp2) {
                    return temp1;
                }
                temp2 = temp2->next;   
            }
            temp1 = temp1->next;
        }
        return temp1;
    }
    
    // // hash table:
    // // Time Complexity: O(n) + O(m) Space: O(n)
    // ListNode* hashTable(ListNode* headA, ListNode* headB) {
    //     ListNode* temp1 = headA;
    //     unordered_map<ListNode*, int> listNodeMap;
    //     while (temp1 != nullptr) {              // Time: O(n)
    //         listNodeMap.insert((temp1, temp1->data)); 
    //         temp1 = temp1->next;
    //     }
    //     // verify that is there any node of second list exist in that map
    //     ListNode* temp2 = headB;
    //     while (temp2 != nullptr) {              // Time: O(m)
    //         if (listNodeMap.find(temp2) != listNodeMap.end()) {
    //             return temp2;
    //         }
    //     }
    //     return temp2;
    // }
    
    // two pointers technique:
    // Time Complexity: O(max(n, m))
    ListNode* twoPointers(ListNode* headA, ListNode* headB) {
        int lenA = findLen(headA);
        int lenB = findLen(headB);
        int d = abs(lenA - lenB);
        
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    int findLen(ListNode* headA) {
        int n = 0;
        while (headA) {
            headA = headA->next;
            n++;
        }
        return n;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        return twoPointers(headA, headB);
    }
};