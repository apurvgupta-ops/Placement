// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.
// Time complexity: O(N)
// Auxiliary Space: O(N)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int d = 2;
//     int temp[n];
//     int k = 0;
//     for (int i = d; i < n; i++)
//     {
//         temp[k] = arr[i];
//         k++;
//     }
//     for (int i = 0; i < d; i++)
//     {
//         temp[k] = arr[i];
//         k++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }

//     // Print the rotated array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// _____________________________________________
#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n, int d)
{
    int k = 1;
    while (k <= d)
    {
        int lastno = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = lastno;
        k++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    func(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}