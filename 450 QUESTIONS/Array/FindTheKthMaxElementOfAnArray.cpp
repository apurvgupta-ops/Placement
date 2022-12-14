// Method 1 (Simple Solution)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthLargest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{
    int arr[] = {1, 23, 34, 44, 78, 12};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Kth largest element is: " << kthLargest(arr, n, k);
}