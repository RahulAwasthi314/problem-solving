/**
 * @file rotateList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/rotate-list/
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
        int c = 0;
        ListNode* t = head;
        while (t) {
            t = t->next;
            c++;
        }
        return c;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        int n = length(head);
        if (k == n or k%n == 0 or n==1) return head;
        else k = n - k%n;
        ListNode* temp = head;
        while (k != 1 and k--) temp = temp->next;
        ListNode* t = temp->next;
        temp->next = nullptr;
        ListNode* t2 = t;
        while (t2->next) t2 = t2->next;
        t2->next = head;
        head = t;
        return head;
    }
};

/* 
error generation due to using double value instead of int in the list

[1,2,3,4,5.6]
8

Line 1793: int rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::GetInt() const [Encoding = rapidjson::UTF8<char>, Allocator = rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>]: Assertion `data_.f.flags & kIntFlag' failed. (document.h)


possible test cases generated:
[1,2,3,4,5]
2
[0,1,2]
4
[]
0
[]
5
[1,2,3,4,5]
2
[1,2,3,4,5]
1
[1,2,3,4,5,6]
0
[1,2,3,4,5,6]
1
[1,2,3,4,5,6]
2
[1,2,3,4,5,6]
5
[1,2,3,4,5,6]
6
[1,2,3,4,5,6]
7
[1]
99
[1,2]
13
[1,2]
17
[1,2]
21
[1,2]
1137
[1,2]
4
[3,4,5]
6
[23,45,67]
13
[23,4,5]
12
[1,2,3]
23


*/





/*

state before making any changes for 
[1,2,3,4,5,6]
6


class Solution {
    int length(ListNode* head) {
        int c = 0;
        ListNode* t = head;
        while (t) {
            t = t->next;
            c++;
        }
        return c;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        int n = length(head);
        if (k != 0) k = n - k%n;
        else return head;
        ListNode* temp = head;
        while (k != 1 and k--) temp = temp->next;
        ListNode* t = temp->next;
        temp->next = nullptr;
        ListNode* t2 = t;
        while (t2->next) t2 = t2->next;
        t2->next = head;
        head = t;
        return head;
    }
};


*/
