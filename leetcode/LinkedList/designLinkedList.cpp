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

// Appraoch without traversing the whole list
class Node {
    int val;
    Node* next;
public:
    Node() {
        val = 0;
        next = nullptr;
    }
    Node(int value) {
        val = value;
        next = nullptr;
    }
    int get_data() {
        return val;
    }
    void set_data(int value) {
        val = value;
    }
    Node* get_next() {
        return next;
    }
    void set_next(Node* ptr) {
        next = ptr;
    }
};

class MyLinkedList {
    Node* head;
public:
    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* t = head;
        if (index == 0 and head != nullptr) return head->get_data();
        if (index == 0 and head == nullptr) return -1;
        for (int i = 0; (i <= index-1) && t; i++) {
            t = t->get_next();
        }
        if (t == nullptr) {
            return -1;
        }
        return  t->get_data();
    }

    void addAtHead(int val) {
        Node* t = new Node(val);
        t->set_next(head);
        head = t;
    }

    void addAtTail(int val) {
        Node* t = head;
        if (t == nullptr) {
            addAtHead(val);
            return;
        }
        while (t->get_next()) {
            t = t->get_next();
        }
        t->set_next(new Node(val));
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* t = head;
        for (int i = 1; i <= index -1 and t; i++) {
            t = t->get_next();
        }
        if (t == nullptr) {
            return;
        }
        if (t->get_next()) {
            Node* t2 = t->get_next();
            t->set_next(new Node(val));
            t->get_next()->set_next(t2);
        } else {
            t->set_next(new Node(val));
        }

    }
    void printList() {
        Node* t = head;
        while (t) {
            cout << t->get_data() << " ";
            t = t->get_next();
        }
        cout << endl;
        return;
    }
    void deleteAtIndex(int index) {
        if (head == nullptr) return;
        if (index == 0) {
            Node* q = head->get_next();
            head = head->get_next();
            if (q) q->set_next(nullptr);
            return;
        }
        Node* t = head;
        for (int i = 1; i <= index -1 and t; i++) {
            t = t->get_next();
        }
        if (!t or !t->get_next()) return;
        Node* q = t->get_next()->get_next();
        t->get_next()->set_next(nullptr);
        t->set_next(q);
        return;
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

/*
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[1],[1]]
["MyLinkedList","addAtHead","get","addAtHead","addAtHead","deleteAtIndex","addAtHead","get","get","get","addAtHead","deleteAtIndex"]
[[],[4],[1],[1],[5],[3],[7],[3],[3],[3],[1],[4]]
["MyLinkedList","addAtTail","get"]
[[],[1],[0]]
["MyLinkedList","addAtIndex","addAtIndex","addAtIndex","get"]
[[],[0,10],[0,20],[1,30],[0]]
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[1],[1]]
["MyLinkedList","addAtHead","addAtHead","addAtHead","addAtIndex","deleteAtIndex","addAtHead","addAtTail","get","addAtHead","addAtIndex","addAtHead"]
[[],[7],[2],[1],[3,0],[2],[6],[4],[4],[4],[5,0],[6]]
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[0],[0]]
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get","get","deleteAtIndex","deleteAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[1],[1],[3],[3],[0],[0],[0],[0]]

*/
