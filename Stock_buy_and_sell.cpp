#include <bits/stdc++.h>
using namespace std;
// Brute Force (TLE on LeetCode)
/* int max_Profit(vector<int> &prices)
{
    int max_profit = 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            int profit = prices[j] - prices[i];
            max_profit = max(max_profit, profit);
        }
    }
    return max_profit;
} */
// Sliding Window (Somehow)
int max_Profit(vector<int> &prices)
{
    int max_profit = 0;
    int buyIndex = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[buyIndex] < prices[i])  //If you get a buying price less than the current price why not jump on that?
        {
            max_profit = max(prices[i] - prices[buyIndex], max_profit);
        }
        else
            buyIndex = i;
    }
    return max_profit;
}
int main()
{
    vector<int> prices;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        prices.emplace_back(num);
    }
    int max_profit = max_Profit(prices);
    cout << max_profit;
    return 0;
}