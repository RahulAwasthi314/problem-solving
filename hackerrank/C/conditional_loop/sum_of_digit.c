/**
 * @file sum_of_digit.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/
 * 
 */

#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    int cpy;
    //Complete the code to calculate the sum of the five digits on n.
    while (n != 0)
    {
        cpy = n % 10;
        sum += cpy;
        n /= 10;
        
    }
    printf("%d", sum);
    return 0;
}
