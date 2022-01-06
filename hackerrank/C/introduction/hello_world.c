/**
 * @file hello_world.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/hello-world-c/
 * 
 */

// HEADER FILE INCLUSION
#include <stdio.h>

// CALLING MAIN FUNCTION, essential for a C program
int main() 
{
    // STATIC CONTIGUOUS MEMORY ALLOCATION TO STORE INPUT
    char s[100];
    scanf("%[^\n]%*c", s);

    // PRINT OUTPUT TO CONSOLE
    printf("Hello, World!\n%s", s);
    return 0;
}