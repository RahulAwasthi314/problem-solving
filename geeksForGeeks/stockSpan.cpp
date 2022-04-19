/**
 * @file stockSpan.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/
 *
 */


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector<int> ans;
       stack<int> s;
       for (int i = 0; i < n; i++) {
           while (s.size() and arr[i] >= arr[s.top()]) s.pop();
           if (s.empty()) ans.push_back(-1);
           if (s.size() and arr[i] < arr[s.top()]) ans.push_back(s.top());
           s.push(i);
       }
       for (int i = 0; i < n; i++) {
           ans[i] = i - ans[i];
       }
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);

		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
