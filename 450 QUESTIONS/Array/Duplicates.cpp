#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            // cout << arr[i];
            return arr[i];
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << func(arr, n);
}