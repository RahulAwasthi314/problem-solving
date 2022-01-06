/**
 * @file print_token.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/printing-tokens-/
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    int i = 0;
    for(i = 0;i < strlen(s); ++i)
    {
        while(s[i] != ' ' && i < strlen(s))
        {
            printf("%c", s[i]);
            i++;
        }
        printf("\n");
        
        
    }
    return 0;
}
