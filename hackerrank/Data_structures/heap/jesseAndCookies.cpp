/**
 * @file jesseAndCookies.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * 
 * 
 */

int cookies(int k, vector<int> A) {
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for (auto i : A) min_heap.push(i);
    while (min_heap.size() >= 2 and min_heap.top() < k) {
        int temp = min_heap.top(); min_heap.pop();
        temp +=(min_heap.top() * 2); min_heap.pop();
        min_heap.push(temp);
        count++;
    }
    return min_heap.empty() ? count : (min_heap.top() >= k ? count : -1);
}