/**
 * @file nextGreaterElement.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/
 *
 */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> ans;
        for (int i = arr.size()-1; i >= 0; i--) {
            while (s.size() and arr[i] >= s.top()) {
                s.pop();
            }
            if (s.empty()) {
                ans.push_back(-1);
            }
            if (s.size() and arr[i] < s.top()) {
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
