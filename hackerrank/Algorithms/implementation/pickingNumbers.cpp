/**
 * @file pickingNumbers.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/picking-numbers/
 * 
 */


// looking at problem with higher complexity
// even the problem can be solved with less hardwork.
struct cmp {
    bool operator()(pair<int, int>& a, pair<int, int>& b) {
        return (a.second < b.second);
    }
} compare;

// failing for 1, 2, 2, 3, 5, 5, 5, 5
int pickingNumbers(vector<int> a) {
    map<int, int> freMap;
    for (int i : a) freMap[i]++;
    sort(freMap.begin(), freMap.end(), compare);
    return 0;
    // return (freMap.rbegin())->second + (freMap.rbegin()+1)->second;
}



// solution:-
int pickingNumbers(vector<int> a) {
    int arr[101] = {0};
    for (int i : a) arr[i]++;
    int maxx = INT_MIN;
    for (int i = 0; i < 101; i++) {
        maxx = max(arr[i] + arr[i+1], maxx);
    }
    return maxx;
}