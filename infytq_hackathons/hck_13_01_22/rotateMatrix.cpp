#include <iostream>
#include <vector>
using namespace std;


void testRotate(vector<vector<int>>& a, int start, int end) {
    int size = end - start + 1;
    int n = size / 2;
    int e = end;
    for (int i = start; i < n; i++) {
        for (int j = i; j < e; j++) {

            cout << i << j << " " << j << end-i<< " " << end-i<< end-j << " " << end-j << i << endl;

        }
        e--;
        cout << endl << endl;
    }
    return;
}

void rotateMatrix(vector<vector<int>>& a, int start, int end) {
    int size = end - start + 1;
    int n = size / 2;
    int e = end;
    for (int i = start; i < n; i++) {
        for (int j = i; j < e; j++) {
            int t1 = a[i][j];
            int t2 = a[j][end - i];
            int t4 = a[end - i][end-j];
            int t3 = a[end -j][i];

            a[i][j] = t2;
            a[j][end - i] = t4;
            a[end - i][end-j] = t3;
            a[end -j][i] = t1;
        }
        e--;
    }
    return;
}

int main () {
    vector<vector<int>> a = {
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7},
        {4,5,6,7,8},
        {5,6,7,8,9}
    };

    vector<vector<int>> b = {
        {1,2,3,4},
        {4,5,6,7},
        {7,8,9,0},
        {4,1,2,3}
    };
    rotateMatrix(b, 0, b.size() - 1);
    rotateMatrix(a, 0, a.size() - 1);

    for (auto i : b) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}