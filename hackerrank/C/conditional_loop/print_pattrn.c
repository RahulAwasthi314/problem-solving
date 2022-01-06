/**
 * @file print_pattrn.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/printing-pattern-2
 * 
 */

 #include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int reg = 0;
    // for printing above pattern
    for(i = -n; i < 0; ++i)
    {
        if (i < 0)
        {
            reg = -i;
            
        }
        // lower triangle 
        /*
                444 4 444
            4    33 3 33    4
            43    2 2 2    34
        */
        for(int k = n; k > reg; --k)
        {
            // cout << k;
            printf("%d ", k);
        }
        for(int j = reg; j > 1; --j)
        {
            // cout << reg;
            printf("%d ", reg);
        }
        // cout << reg;
        printf("%d ", reg);
        for(int j = reg; j > 1; --j)
        {
            // cout << reg;
            printf("%d ", reg);
        }
        for(int k = reg; k < n; ++k)
        {
            // cout << k + 1;
            printf("%d ", k + 1);
        }
    
        // cout << endl;
        printf("\n");

        // for line 4321234 
        //          middle line
        // if (reg == 0)
        // {
        //     for(int j = n; j > 0; --j)
        //     {
        //         cout << j;
        //     }
        //     for(j = 2; j <= n; ++j)
        //     {
        //         cout << j;
        //     }
        // }
    }
    //cout << endl;

    for(reg = 2; reg <= n; ++reg)
    {
        for(int k = n; k > reg; --k)
        {
            // cout << k;
            printf("%d ", k);
        }
        for(int j = reg; j > 1; --j)
        {
            // cout << reg;
            printf("%d ", reg);
        }
        // cout << reg;
        printf("%d ", reg);
        for(int j = reg; j > 1; --j)
        {
            // cout << reg;
            printf("%d ", reg);
        }
        for(int k = reg; k < n; ++k)
        {
            // cout << k + 1;
            printf("%d ", k + 1);
        }
        // cout << endl;
        printf("\n");
    }
}
