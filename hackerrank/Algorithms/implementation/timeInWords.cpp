/**
 * @file timeInWords.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/the-time-in-words/
 * 
 */

string timeInWords(int h, int m) {
    map<int, string> hour { {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six" }, 
    {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, 
    {14, "fourteen"},{16, "sixteen"},{17, "seventeen"},{18, "eighteen"},{19, "nineteen"},{20, "twenty"},
    {21, "twenty one"},{22, "twenty two"},{23, "twenty three"},{24, "twenty four"},{25, "twenty five"},
    {26, "twenty six"},{27, "twenty seven"},{28, "twenty eight"},{29, "twenty nine"},{30, "half"},
    {31, "thirty one"},{32, "thirty two"},{33, "thirty three"},{34, "thirty four"},{35, "thirty five"},
    {36, "thirty six"},{37, "thirty seven"},{38, "thirty eight"},{39, "thirty nine"},{40, "forty"},
    {41, "forty one"},{42, "forty two"},{43, "forty three"},{44, "forty four"},{45, "forty five"},
    {46, "forty six"},{47, "forty seven"},{48, "forty eight"},{49, "forty nine"},{50, "fifty"},
    {51, "fifty one"},{52, "fifty two"},{53, "fifty three"},{54, "fifty four"},{55, "fifty five"},
    {56, "fifty six"},{57, "fifty seven"},{58, "fifty eight"},{59, "fifty nine"} };
    
    string ans = "";
    if (m == 0) {
        ans = hour.find(h)->second + " o' clock"; return ans;
    }
    if (m <= 30) ans = hour.find(h)->second;
    else ans = hour.find(h+1)->second;
    
    if (m > 0 and m < 10) 
        ans = hour.find(m)->second + " minute past " + ans;
    else if (m == 15) ans = "quarter past " + ans;
    else if (m >= 10 and m < 30) ans = hour.find(m)->second + " minutes past " + ans;
    else if (m == 30) ans = "half past " + ans;
    else if (m == 45) ans = "quarter to " + ans;
    else ans = hour.find(60-m)->second + " minutes to " + ans;
    
    return ans;
}