/**
 * @file peakIndexInMountainArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * 
 */
class Solution {
    // time: O(n)
    int linearApproach(vector<int>& arr) {
        int i = 1;
        int j = arr.size()-1;
        while (arr[i-1] < arr[i]) i++;
        while (arr[j-1] > arr[j]) j--;
        cout << i << " " << j << "\n";
        return j;
    }

    int lograthmicApproach(vector<int>& arr) {
        int i = 0, j = arr.size()-1;
        while (i < j) {
            int mid = i + (j-i)/2;
            // arr[mid-1] < arr[mid] < arr[mid+1] : i = mid;
            if (arr[mid-1] < arr[mid] and arr[mid] < arr[mid+1]) i = mid;
            
            // arr[mid-1] > arr[mid] > arr[mid+1] : j = mid;
            else if (arr[mid-1] > arr[mid] and arr[mid] > arr[mid+1]) j = mid;
            
            // arr[mid-1] < arr[mid] > arr[mid+1] : return mid
            else return mid;
        }
        return -1;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return lograthmicApproach(arr);
        return linearApproach(arr);
    }
};