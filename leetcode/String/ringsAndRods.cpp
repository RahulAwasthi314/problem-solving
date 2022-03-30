/**
 * @file ringsAndRods.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/rings-and-rods/
 *
 */

 class Solution {
 public:
     int countPoints(string rings) {
         int arr[10][3] = {0};
         for (int i = 0; i < rings.size(); i+=2) {
             // RINGS[I] = color,
             // arr[rings[i]][R, G, B]
             if (rings[i] == 'R') {
                 arr[rings[i+1]-'0'][0] = 1;
             } else if (rings[i] == 'G') {
                 arr[rings[i+1]-'0'][1] = 1;
             } else if (rings[i] == 'B') {
                 arr[rings[i+1]-'0'][2] = 1;
             }
         }

         int count = 0;
         for (int i = 0; i < 10; i++) {
             bool flag = true;
             for (int j = 0; j < 3; j++) {
                 if (arr[i][j] != 1) flag = false;
             }
             if (flag) count++;
         }
         return count;
     }
 };
