// Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

//     Each student gets one packet.
//     The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
// Time complexity = O(nlogn)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int s)
{
    int maxDiff = INT8_MAX;
    sort(arr, arr + n);
    if (s > n)
    {
        return -1;
    }
    for (int i = 0; i + s - 1 < n; i++)
    {
        int diff = arr[i + s - 1] - arr[i];

        if (diff < maxDiff)
        {

            maxDiff = diff;
        }
    }
    return maxDiff;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int student = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is: " << func(arr, n, student);
}