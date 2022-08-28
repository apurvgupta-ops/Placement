// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &arr)
{
    int n = arr.size();
    int minimumPrice = arr[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - minimumPrice;
        minimumPrice = min(arr[i], minimumPrice);
        maxProfit = max(maxProfit, cost);
    }
    return maxProfit;
}

int main()
{
    vector<int> arr = {5, 6, 7, 1, 4};
    cout << func(arr);
}