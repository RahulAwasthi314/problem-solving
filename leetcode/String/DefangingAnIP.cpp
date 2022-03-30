/**
 * @file defangingAnIP.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/defanging-an-ip-address/
 *
 */
 class Solution {
 public:
     string defangIPaddr(string address) {
         string s;
         for (char ad : address) {
             if (ad == '.') {
                 s += "[.]";
             }
             else s += ad;
         }
         return s;
     }
 };
