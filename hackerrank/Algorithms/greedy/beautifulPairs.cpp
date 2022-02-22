/**
 * @file beautifulPairs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/beautiful-pairs/
 * 
 */

int beautifulPairs(vector<int> A, vector<int> B) {
    map<int, int> freMapA;
    map<int, int> freMapB;
    int count = 0;
    bool flag = false;
    for (auto i : A) freMapA[i]++;
    for (auto i : B) freMapB[i]++;
    for (auto i : freMapA) {
        auto j = freMapB.find(i.first);
        if (j != freMapB.end()) count += min(i.second, j->second);
        else flag = true;
    }
    if (flag == true) return count+1;
    return count-1;
}