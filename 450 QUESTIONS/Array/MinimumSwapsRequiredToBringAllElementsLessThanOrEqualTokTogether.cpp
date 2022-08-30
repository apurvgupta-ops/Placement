// Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

// Time Complexity: O(n)
// Auxiliary Space: O(1)
#include <iostream>
using namespace std;

int func(int arr[], int n, int k)
{
    int ans = 0;
    int count = 0;
    int bigNo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
        {
            bigNo++;
        }
    }

    if (count == 1)
        return 0;
    // Sliding window;
    ans = bigNo;
    for (int i = 0; i + count < n; i++)
    {
        if (arr[i] > k)
        {
            bigNo--;
        }
        if (arr[i + count] > k)
        {
            bigNo++;
        }
        ans = min(ans, bigNo);
    }

    return ans;
}

int main()
{
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Minimum swaps are: " << func(arr, n, k);
}