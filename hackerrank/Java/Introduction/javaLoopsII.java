/**
 * @file javaLoops.java
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/java-loops/
 * 
 */

import java.util.*;
import java.io.*;
import java.lang.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            // printing the series
            for (int j = 0; j < n; j++) {
                int sum = 0;
                for (int k = 0; k <= j; k++) {
                    sum += (int)Math.pow(2, k);
                }
                System.out.printf("%d ", sum * b + a);
                
            }
            System.out.println();
        }
        in.close();
    }
}
