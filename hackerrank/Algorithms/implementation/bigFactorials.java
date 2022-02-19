/**
 * @file bigFactorials.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/extra-long-factorials
 * 
 */

class Result {

    /*
     * Complete the 'extraLongFactorials' function below.
     *
     * The function accepts INTEGER n as parameter.
     */
    
    static BigInteger fact(int n) {
        BigInteger num;
        num = new BigInteger("1");
        for (int i = 1; i <= n; i++) {
            BigInteger b = new BigInteger("" + i);
            num = num.multiply(b);
        }
        return num;
    }

    public static void extraLongFactorials(int n) { System.out.println(fact(n)); }
};