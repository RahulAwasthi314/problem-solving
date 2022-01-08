/**
 * @file ifElse.java
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/java-if-else/
 *
 */

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

    

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        scanner.close();
        
        System.out.print(isWeird(N));
    }
    
    private static String isWeird(int N) {
        // odd number
        if (N % 2 == 1) {
            return "Weird";
        }
        // even number
        else {
            if (N >= 2 && N <= 5) return "Not Weird";
            else if (N >= 6 && N <= 20) return "Weird";
            else return "Not Weird";
        }
    }
}

public class Solution2 {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        scanner.close();
        // odd number
        if (N % 2 == 1) {
            System.out.print("Weird");
        }
        // even number
        else {
            if (N >= 2 && N <= 5) System.out.print("Not Weird");
            else if (N >= 6 && N <= 20) System.out.print("Weird");
            else System.out.print("Not Weird");
        }
    }

}