#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'acmTeam' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY topic as parameter.
 */
vector<int> acmTeam(vector<string> topic) {
    vector<int> maxi;
    int count = 0;
    int maxx = INT_MIN;
    for (int i = 0; i < topic.size(); i++) {
        for (int j = i+1; j < topic.size(); j++) {
            int temp = 0;
            // cout << i << " " << j;
            // perfectly working
            for (int k = 0; k < topic[j].size(); k++) 
                if ((topic[i][k] == '1') or (topic[j][k] == '1')) temp++;
            maxi.push_back(temp);
            maxx = max(maxx, temp);
        }
    }
    
    for (int i : maxi) if (i == maxx) count++;
    return {maxx, count};
}