/**
 * @file luckBalance.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/luck-balance/
 * 
 */


struct compare {
    bool operator()(vector<int>& a, vector<int>& b) {
        
        if (a[1] < b[1]) return true;
        else {
            if (a[1] == b[1]) return a[0] < b[0];
            else return false;
        }
    }
} cmp;

int luckBalance(int k, vector<vector<int>> contests) {
    sort(contests.begin(), contests.end(), cmp);
    int bal = 0;
    for (auto i : contests) {
        for (auto j : i) {
            cout << j << " ";
        } cout << "\n";
    }
    int count_zero = 0;
    for (int i = 0; i < contests.size(); i++) {
        if (contests[i][1] == 0) {
            bal += contests[i][0];
            cout << " \nthis  will added" << contests[i][0];
            count_zero++;
        }
        else break;
    }
    for (int i =contests.size()-1; i >= count_zero; i--) {
        cout << contests[i][0] << " ";
    }
    for (int i = contests.size()-1; i >= count_zero; i--) {
        if (contests[i][1] == 1) {
            if (k) {
                bal += contests[i][0];
                cout << " \n this will be added" << contests[i][0];
                k = k -1;
            }
            else if (k == 0){
                bal -= contests[i][0];
            }
        }
    }
    return bal;
}
