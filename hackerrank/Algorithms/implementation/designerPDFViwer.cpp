/**
 * @file designerPDFViwer.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/designer-pdf-viewer/
 * 
 */

int designerPdfViewer(vector<int> h, string word) {
    int width = word.size();
    int height = INT_MIN;
    for (auto i : word) height = max(height, h[i - 97]);
    return height * width;
}