/**
 * @file nextSmallerRight.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/
 *
 */

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{

    public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
        // Your code goes here
        stack<int> s;
        vector<int> ans;
        for (int i = arr.size()-1; i >= 0 ; i--) {
            while (s.size() and arr[i] <= s.top()) {
                s.pop();
            }
            if (s.empty()) {
                ans.push_back(-1);
            }
            if (s.size() and arr[i] > s.top()) {
                ans.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

  // } Driver Code Ends
