/**
 * @file jesseAndCookies.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/contests/h-cs3c-feb17/challenges/jesse-and-cookies
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
    if (min_heap.empty()) return count;
    else if (min_heap.top() >= k) return count;
    cout << count << " ";
    return -1;
}