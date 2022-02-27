#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void delMiddle(stack<int>& st, int s) {
    if (0 != s) {
        int x = st.top();
        st.pop();
        delMiddle(st, s-1);
        st.push(x);
    }
    if (!st.empty() and 0 == s) {
        st.pop();
        return;
    }
}

int main( ) {
    stack<int> st;
    st.push(1); st.push(4);st.push(1); st.push(3); st.push(2);;
    int s = st.size()/2;
    delMiddle(st, s);
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}