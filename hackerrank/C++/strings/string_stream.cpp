/**
 * @file string_stream.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/c-tutorial-stringstream/
 * 
 */

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseInts(string str) {
    // declare string stream and pass string to it
    stringstream ss(str);

    // declare vector
    vector<int> v;

    // declare string 
    string s;

    // get the input by looping
    while(getline(ss, s, ',')) {
        // int(s);
        v.push_back(stoi(s));
    }
    // push the integers one by one in loop

    // return vector
    return v;

}

int main() {

    // input data
    string str;
    cin >> str;
    
    // vector 
    vector<int> integers = parseInts(str);
    
    // print section
    for (int i = 0; i < integers.size(); ++i) {
        cout << integers[i] << "\n";
    }

    return 0;
}
