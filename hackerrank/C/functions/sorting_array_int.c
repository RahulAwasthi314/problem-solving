/**
 * @file sorting_array_int.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/sorting-array-of-strings
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int dist_char(const char* a) {
    int x[26] = {0};
       
    for(int i=0;a[i] != '\0'; i++){
        x[a[i] - 'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(x[i] >= 1)
            count++;
    }
    return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    return (dist_char(a) - dist_char(b));
}

int sort_by_length(const char* a, const char* b) {
    return strlen(a) - strlen(b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len -i -1; j++) {
            int res = cmp_func(arr[j], arr[j+1]);
            res = res?res:lexicographic_sort(arr[j], arr[j+1]);
            if (res > 0) {
                char* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}