/**
 * @file solveMe.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/solve-me-first/ 
 *
 */

#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
 return a+b;
  
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
