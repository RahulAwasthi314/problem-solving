/**
 * @file designLinkedList.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/design-linked-list/
 */

/* 
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Node {
    int val;
    Node* next;
    
public:
    Node() {
        val = 0;
        next = nullptr;
    }
    
    Node (int value) { val = value; }
    
    int get_data()              { return val; }
    void set_data(int value)    { val = value; }
    Node* get_next()            { return next; }
    void set_next(Node* nx)     { next = nx; }
};


class MyLinkedList {
    Node* head;
public:
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        int len = length(head);
        if (len <= index) return -1;
        Node* t = head;
        while (index--) {
            t = t->get_next();
        }
        return t->get_data();
        
    }
    
    void addAtHead(int val) {
        Node* node = new Node(val);
        node->set_next(head);
        head = node;
    }
    
    int length(Node* head) {
        Node* t = head;
        int c = 0;
        while (t) {
            c++;
            t = t->get_next();
        }
        return c;
    }
    
    
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        Node* t = head;
        if (!t) {
            head = node;
            return;
        }
        while (t->get_next()) t = t->get_next();
        t->set_next(node);
    }
    
    void addAtIndex(int index, int val) {
        Node* node = new Node(val);
        int len = length(head);
        if (index > len) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* t = head;
        while (index != 1) {
            t = t->get_next();
            index--;
        }
        Node* t1 = t->get_next();
        t->set_next(node);
        node->set_next(t1);
    }
    
    void deleteAtIndex(int index) {
        int len = length(head);
        if (len == 0) return;
        if (len <= index) return;
        Node* t = head;
        if (index == 0) {
            if (!head) return;
            else {
                Node* h = head;
                head = head->get_next();
                h->set_next(nullptr);
                delete h;
            }
            return;
        }
        while (index != 1) {
            t = t->get_next();
            cout << index << " ";
            index--;
        }
        Node* t1 = nullptr;
        if (t->get_next()) {
            t1 = t->get_next()->get_next();
            delete t->get_next();
            t->set_next(t1);
        }
    }
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */