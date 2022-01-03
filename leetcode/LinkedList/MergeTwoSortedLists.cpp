/**
 * @file MergeTwoSortedLists.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/merge-two-sorted-lists/
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
private:
    void swap(ListNode* t1, ListNode* t2) {
        int temp = t1->val;
        t1->val = t2->val;
        t2->val = temp;
    }
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* t2 = l2;
        
        // IF ANY OF THE LIST GOT EMPTY
        while (l1 != nullptr or l2 != nullptr) {
            
            // IF LIST1 == NULL, just return LIST2
            if (l1 == nullptr) return l2;
            // IF LIST2 == NULL, just return LIST1
            if (l2 == nullptr) return l1;
            
            // if t2 reaches to nullptr, append list1 to it's end
            if (t2->next == nullptr) {
                t2->next = l1;
                return l2;
            }
            
            // INSERT THE NODE IN THE SECOND LIST
            ListNode* temp = l1;
            l1 = l1->next;
            temp->next = t2->next;
            t2->next = temp;
            
            // if the added Node's value < previous node's value
            // swap their value
            if (temp->val < t2->val) {
                swap(temp, t2);
            }
            
            // move t2 one step forward
            t2 = t2->next;
            
        }
        return l2;
    }
};
// this is failing
/*
[4,5,6]
[1,2,4,5,6]
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
class CorrectSolution2 {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* ptr = l3;
        
        while(l1 != nullptr and l2 != nullptr) {
            ListNode* temp = new ListNode(0);
            if (l1->val <= l2->val) {
                temp = l1;
                l1 = l1->next;
                ptr->next = temp;
                temp->next = nullptr;
                ptr = ptr->next;
            }else {
                temp = l2;
                l2 = l2->next;
                ptr->next = temp;
                temp->next = nullptr;
                ptr = ptr->next;
            }
            
        }
        if (l1 == nullptr) {
            ptr->next = l2;
        }
        if (l2 == nullptr) {
            ptr->next = l1;
        }
        return l3->next;
            
        
    }
};