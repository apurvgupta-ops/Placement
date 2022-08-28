// Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
// Follow the steps mentioned below to implement the idea:

//     Traverse the array from start to end:
//         For every element:
//             Traverse the array from start to that index and find the maximum height (a) and
//             Traverse the array from the current index to the end, and find the maximum height (b).
//     The amount of water that will be stored in this column is min(a,b) – array[i], add this value to the total amount of water stored
//     Print the total amount of water stored.

// Time and space complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    int ans = 0;
    int left[n];
    int right[n];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(arr[i], left[i - 1]);
    }
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(arr[i], right[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += min(left[i], right[i]) - arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {3, 1, 2, 4, 0, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Total units of water store is: " << func(arr, n);
}