#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    int buy, sell, maxProfit = 0;
    buy = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (buy > arr[i])
        {
            buy = arr[i];
        }
        else if (arr[i] - buy > maxProfit)
        {
            maxProfit = arr[i] - buy;
            cout << maxProfit << endl;
        }
    }
    return maxProfit;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max Profit: " << func(arr, n);
}