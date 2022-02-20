/**
 * @file halloweenSale.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/halloween-sale/
 * 
 */

int howManyGames(int price, int diff, int min_price, int total_price) {
    // Return the number of games you can buy
    int count = 0;
    while (total_price >= price) {
        count++;
        total_price -= price;
        // cout << total_price << " ";
        // price = price-diff>min_price?price-diff:min_price;
        if (price-diff > min_price) price -= diff;
        else price = min_price;
        
    }
    return count;
}