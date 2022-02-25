/**
 * @file drawingBook.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/drawing-book/
 * 
 */


int pageCount(int n, int p) {
    int size = 0;
    if (n%2 == 0) size = n + 2;
    else size = n + 1;
    int ar[size] = {0};
    for (int i = 0; i < size; i++) ar[i] = i;
    
    if (n%2 == 0) ar[size-1] = n;
    // for(auto i : ar) cout << i << " ";

    int c_i = 0;
    int c_j = 0;
    for (int i = 0, j = size-1; ; i+=2, j-=2) {
        cout << ar[i] << " " << ar[i+1]  << "   " << ar[j] << " " <<  ar[j-1] << "\n";
        if (ar[i] == p or ar[i+1] == p) break;
        if (ar[j] == p or ar[j-1] == p) break;
        if (ar[i] != p or ar[i+1] != p) c_i++;
        if (ar[j] != p or ar[j-1] != p) c_j++;

    }
    return min(c_i, c_j);
}