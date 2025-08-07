// this is to find the maximum profit by buting stocks on different days (leetocde)
// on every next element there are 2 possiblity to max profit
// dec buying prices or check for max selling price
#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int p = 0;
    int s = prices.size();
    int buy = prices[0];
    int profit = 0;
    for (int i = 0; i < s; i++)
    {

        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        if (prices[i] - buy > profit)
            profit = prices[i] - buy;
    }
    return profit;
}
