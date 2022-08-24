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
    vector<int> arr = {7, 1, 5, 6, 4};
    cout << func(arr);
}