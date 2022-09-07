// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void func(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int i = 0;
//     while (k > 0)
//     {
//         int lastNo = arr[n - 1];
//         for (i = n - 1; i >= 0; i--)
//         {
//             arr[i] = arr[i - 1];
//             cout << arr[i];
//         }
//         arr[0] = lastNo;
//         k--;
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     int k = 3;
//     func(arr, k);
// }

// ________________________________________________________
// Time complexity : O(n)
// Auxiliary Space : O(1)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void func(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     // Check the shifting units is greater then size of array or not
//     k = k % n;
//     for (int i = 0; i < n; i++)
//     {
//         if (i < k)
//         {
//             cout << arr[n + i - k] << " ";
//         }
//         else
//         {
//             cout << arr[i - k] << " ";
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     int k = 3;
//     func(arr, k);
// }

// ____________________________________________________
// Method 2: Reversing the array
// Approach: The approach is simple yet optimized. The idea is to reverse the array three times. For the first time we reverse only the last k elements. Second time we will reverse first n-k(n=size of array) elements. Finally we will get our rotated array by reversing the entire array.
// C++ program to rotate right an array by K times
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // No. of rotations
    k = k % n;
    int i, j;
    // Reverse last k numbers
    for (i = n - k, j = n - 1; i < j; i++, j--)
    {
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;

        swap(arr[i], arr[j]);
    }
    // Reverse the first n-k terms
    for (i = 0, j = n - k - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Reverse the entire array
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
