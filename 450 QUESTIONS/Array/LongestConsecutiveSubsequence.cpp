// Given an array of integers, find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

// Time complexity: O(Nlog(N)), Time to sort the array is O(Nlog(N)).
// Auxiliary space: O(N). Extra space is needed for storing distinct elements.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    int count = 0;
    int ans = 0;
    sort(arr, arr + n);
    // EDGE CASE
    vector<int> a;
    a.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            a.push_back(arr[i]);
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        ans = max(count, ans);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Consecutive Subsequence is: " << func(arr, n);
}