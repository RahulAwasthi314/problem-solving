#include <bits/stdc++.h>
using namespace std;
void appendAtBeg(stack<int>& st, int x) {
    if (st.size() == 0) {
        st.push(x);
        return;
    }
    int l = st.top(); st.pop();
    appendAtBeg(st, x);
    st.push(l);
}

void revStack(stack<int>& st) {
    if (st.size() == 0) {
        return;
    }
    int x = st.top(); st.pop();
    revStack(st);
    appendAtBeg(st, x);
}

int main( ) {
    stack<int> st;
    st.push(5); st.push(4); st.push(3); st.push(2);st.push(1);
    int s = st.size()/2;
    revStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}