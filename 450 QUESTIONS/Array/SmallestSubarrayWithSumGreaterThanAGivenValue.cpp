// Given an array of integers and a number x, find the smallest subarray with sum greater than the given value.
// Time Complexity: O(n2).
// Auxiliary Space: O(1)
// #include <iostream>
// using namespace std;

// int func(int arr[], int n, int x)
// {
//     int minlen = n + 1;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = arr[i];
//         if (sum > x)
//         {
//             return 1;
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum > x && (j - i + 1) < minlen)
//             {
//                 minlen = j - i + 1;
//             }
//         }
//     }
//     return minlen;
// }

// int main()
// {
//     int arr[] = {1, 4, 45, 6, 10, 19};
//     int x = 51;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Smallest subarray is: " << func(arr, n, x);
// }

// ___________________________________________________________________
#include <iostream>
using namespace std;

int func(int arr[], int n, int x)
{
    int sum = 0;
    int len = n - 1;
    int start = 0;
    int end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end];
            end++;
        }

        while (sum > x && start < n)
        {
            if (end - start < len)
            {
                len = end - start;
            }
            else
            {
                sum -= arr[start];
                start++;
            }
        }
    }
    return len;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest subarray is: " << func(arr, n, x);
}