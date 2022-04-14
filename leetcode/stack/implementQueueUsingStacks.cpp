/**
 * @file implementQueueUsingStacks.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/implement-queue-using-stacks/
 *
 */

class MyQueue {
    stack<int> in_stack;
    stack<int> out_stack;
public:
    MyQueue() {

    }

    void push(int x) {
        in_stack.push(x);
    }

    int pop() {
        while (!in_stack.empty()) {
            out_stack.push(in_stack.top());
            in_stack.pop();
        }
        int val = out_stack.top(); out_stack.pop();
        while (!out_stack.empty()) {
            in_stack.push(out_stack.top());
            out_stack.pop();
        }
        return val;
    }

    int peek() {
        while (!in_stack.empty()) {
            out_stack.push(in_stack.top());
            in_stack.pop();
        }
        int val = out_stack.top();
        while (!out_stack.empty()) {
            in_stack.push(out_stack.top());
            out_stack.pop();
        }
        return val;
    }

    bool empty() {
        return in_stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
