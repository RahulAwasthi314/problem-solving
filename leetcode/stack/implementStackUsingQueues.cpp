/**
 * @file implementStackUsingQueues.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/implement-stack-using-queues/
 *
 */

class MyStack {
    queue<int> in_que;
    queue<int> out_que;
public:
    MyStack() {
    }

    void push(int x) {
        in_que.push(x);
    }

    int pop() {
        while (in_que.size() > 1) {
            out_que.push(in_que.front());
            in_que.pop();
        }
        int val = in_que.front(); in_que.pop();
        while (!out_que.empty()) {
            in_que.push(out_que.front());
            out_que.pop();
        }
        return val;
    }

    int top() {
        while (in_que.size() > 1) {
            out_que.push(in_que.front());
            in_que.pop();
        }
        int val = in_que.front();
        out_que.push(in_que.front());
        in_que.pop();
        while (!out_que.empty()) {
            in_que.push(out_que.front());
            out_que.pop();
        }
        return val;
    }

    bool empty() {
        return in_que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
