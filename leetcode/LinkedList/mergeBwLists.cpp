/**
 * @file mergeBwLists.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/merge-in-between-linked-lists/
 * 
 */

// T(n) = O(n + m)

// soluion for merging in between some node values
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        // go to prev node of a
        while (temp->next->val != a) temp = temp->next;
        ListNode* t = temp->next;
        temp->next = list2;
        while (temp->next != nullptr) temp = temp->next;
        while (t->val != b) t = t->next;
        temp->next = t->next;
        return list1;
    }
}

// actual problem solution
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        b -= (a-1);
        while (a != 1 and a--) temp = temp->next;
        ListNode* t = temp;
        while (b--)  temp = temp->next;
        cout << temp->val;
        t->next = list2;
        while (t->next) t = t->next;
        t->next = temp->next;
        return list1;
    }
};
/*
[0,1,2,3,4,5]
3
4
[1000000,1000001,1000002]

[1,2,3,4,5]
3
3
[1,2,3,4,5]

[1,2,3,4,5,6]
3
4
[1,2,3,4,5]

[1,2,3]
1
1
[1]

[1,2,3,4]
1
2
[1]

*/