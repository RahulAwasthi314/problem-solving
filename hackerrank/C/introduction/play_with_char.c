/**
 * @file play_with_char.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/playing-with-characters/
 * 
 */

#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[20],sen[30];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s\n",s);
    puts(s);
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    return 0;
}