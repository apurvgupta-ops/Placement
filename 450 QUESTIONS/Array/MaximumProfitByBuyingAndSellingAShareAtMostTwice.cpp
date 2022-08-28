// In daily share trading, a buyer buys shares in the morning and sells them on the same day. If the trader is allowed to make at most 2 transactions in a day, whereas the second transaction can only start after the first one is complete (Buy->sell->Buy->sell). Given stock prices throughout the day, find out the maximum profit that a share trader could have made.

// Time Complexity - O(n)
#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            maxProfit += arr[i] - arr[i - 1];
        }
    }
    return maxProfit;
}

int main()
{
    int arr[] = {2, 30, 15, 10, 8, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max Profit is: " << func(arr, n);
}