/**
 * @file climbingTheLeaderBoard.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/climbing-the-leaderboard/
 * 
 */

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> ans;
    set<int> unique(ranked.begin(), ranked.end());
    ranked.clear();
    for (int i : unique) ranked.push_back(i);
    sort(ranked.begin(), ranked.end(), greater<int>());
    for (int i : ranked) cout << i << " ";
    
    for (int p : player) {
        for (int i = 0; i < ranked.size(); i++) {
            if (p == ranked[i]) ans.push_back(i+1);
            if (p > ranked[i] and p < ranked[i+1]) ans.push_back(i+1);
            cout << p << " " << ranked[i] << "\n";
        }
        for (int i : ans) cout << i << " ";
        cout << endl;
    }
    return ans;
}