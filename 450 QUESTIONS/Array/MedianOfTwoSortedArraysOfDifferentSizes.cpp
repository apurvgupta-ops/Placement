// Given two sorted arrays, a[] and b[], the task is to find the median of these sorted arrays, in O(log n + log m) time complexity, when n is the number of elements in the first array, and m is the number of elements in the second array.
// This is an extension of median of two sorted arrays of equal size problem. Here we handle arrays of unequal size also.

// Time Complexity: O((n+m) Log (n+m))
// Auxiliary Space: O(n+m). Since we are creating a new array of size n+m.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    if (n % 2 == 0)
    {
        int len = n / 2;
        int no = arr[len];
        int prevno = arr[len - 1];
        int ans = (no + prevno) / 2;
        return ans;
    }
    else
    {
        int k = round(n / 2);
        return arr[k];
    }
}

int main()
{
    int arr1[] = {-5, 3, 6, 12, 15};
    int arr2[] = {-12, -10, -6, -3, 4, 10};

    int i = sizeof(arr1) / sizeof(arr1[0]);
    int j = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[i + j];
    int l = i + j;
    // Merge two array into one array
    for (int k = 0; k < i; k++)
    {
        arr3[k] = arr1[k];
    }

    int a = 0;
    for (int k = i; k < l; k++)
    {
        arr3[k] = arr2[a++];
    }

    // Sort the merged array
    sort(arr3, arr3 + l);

    // calling the method
    cout << "Median = " << func(arr3, l);
}