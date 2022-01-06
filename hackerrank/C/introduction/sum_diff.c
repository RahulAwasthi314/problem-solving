/**
 * @file sum_diff.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/sum-numbers-c/
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
    float no1,no2;
    scanf("%d%d",&num1,&num2);
    scanf("%f%f",&no1,&no2);
    printf("%d %d\n",num1+num2,num1-num2);
    printf("%.1f %.1f",no1+no2,no1-no2);
    
    return 0;
}