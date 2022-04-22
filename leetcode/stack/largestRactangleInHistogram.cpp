/**
 * @file largestRectangleInHistogram.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/largest-rectangle-in-histogram/
 *
 */


class Solution {

    vector<int> findNSL(vector<int>& heights) {
        vector<int> ans;
        stack<int> s;
        int pseudoIdx = -1;
        for (int i = 0; i < heights.size(); i++) {
            while (s.size() and heights[i] <= heights[s.top()]) s.pop();
            if (s.empty()) ans.push_back(pseudoIdx);
            if (s.size() and heights[i] > heights[s.top()]) ans.push_back(s.top());
            s.push(i);
        }
        /*
        cout << "NSL: ";
        for (int i : ans) cout << i << " ";
        cout << endl;
        */
        return ans;
    }
    vector<int> findNSR(vector<int>& heights) {
        vector<int> ans;
        stack<int> s;
        int pseudoIdx = heights.size();
        for (int i = heights.size()-1; i >= 0; i--) {
            while (s.size() and heights[i] <= heights[s.top()]) s.pop();
            if (s.empty()) ans.push_back(pseudoIdx);
            if (s.size() and heights[i] > heights[s.top()]) ans.push_back(s.top());
            s.push(i);
        }
        reverse(ans.begin(), ans.end());
        /*        cout << "NSR: ";
        for (int i : ans) cout << i << " ";
        cout << endl;
        */
        return ans;
    }


public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nsl, nsr;
        nsl = findNSL(heights);
        nsr = findNSR(heights);
        int maxArea = 0;
        for (int i = 0; i < heights.size(); i++)
            maxArea = max(heights[i] * (nsr[i] - nsl[i]-1), maxArea);
        return maxArea;
        /*
        int widths[heights.size()] ;
        memset(widths, 0, sizeof(widths));
        for (int i = 0; i < heights.size(); i++) {
            widths[i] = nsr[i] - 1 - nsl[i];
            cout << widths[i] << " ";
        }
        cout << endl;
        int area[heights.size()];
        memset(area, 0, sizeof(area));

        for (int i = 0; i < heights.size(); i++) {
            area[i] = heights[i] * widths[i];
            cout << area[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < heights.size(); i++) {
            maxArea = max(maxArea, area[i]);
        }
        */
        for (int i = 0; i < heights.size(); i++)
            maxArea = max(heights[i] * (nsr[i] - nsl[i]-1), maxArea);
        return maxArea;
    }
};
