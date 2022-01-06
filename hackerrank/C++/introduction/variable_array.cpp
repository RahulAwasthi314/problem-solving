/**
 * @file variable_array.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/variable-sized-arrays/
 * 
 */

#include <iostream>
#include <vector>
using namespace::std;
int main() {
    
    // queries count
    int queries;

    // rows count
    int array_count;
    
    // vector initialization
    vector<vector<int>> result;

    cin >> array_count;
    cin >> queries;

    for (int i = 0; i < array_count; ++i) {
        
        // temp vector initialization 
        vector<int> v;
        
        int first_row; 

        // take the input for first row
        cin >> first_row;

        for(int j = 0; j < first_row; ++j) {

            int num;
            cin >> num;
            v.push_back(num);
        }

        // push to final vector
        result.push_back(v);
    }

    for(int i = 0; i < queries; ++i) {
        
        int row, column;
        cin >> row >> column;
        cout << result[row][column] << "\n";
    }
    
    return 0;
}
