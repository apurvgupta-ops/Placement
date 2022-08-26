#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    int maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum subarray is: " << func(arr, n);
}

// __________________________________________________________
// By Kadan's Algorithm
// #include <iostream>
// using namespace std;

// int func(int arr[], int n)
// {
//     int sum = INT8_MIN;
//     int no = 0;
//     for (int i = 0; i < n; i++)
//     {
//         no = no + arr[i];
//         if (no < 0)
//         {
//             no = 0;
//         }
//         if (sum < no)
//         {
//             sum = no;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     int arr[] = {1, 3, -3, 5, 6, -8, -9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Maximum subarray is: " << func(arr, n);
// }