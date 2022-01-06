/**
 * @file basic_data_types.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/variable-sized-arrays/
 * 
 */

 #include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d \n%ld \n%c \n%f \n%lf\n", a, b, c, d, e);
    return 0;
}
