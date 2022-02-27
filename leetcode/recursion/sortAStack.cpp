#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void insert(stack<int>& st, int t) {
    if (st.empty() || st.top() <= t) {
        st.push(t);
        return;
    }
    if (!st.empty()) {
        int x = st.top();
        st.pop();
        insert(st, t);
        st.push(x);
    }
    return;
}

void sortAStack(stack<int>& st) {
    if (st.size() == 1) return;
    if(!st.empty()) {
        int t = st.top();
        st.pop();
        sortAStack(st);
        insert(st, t);
    }

}

int main( ) {
    stack<int> st;
    st.push(1); st.push(4);st.push(1); st.push(3); st.push(2); st.push(5);
    sortAStack(st);
    cout << "sorted stack is: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}