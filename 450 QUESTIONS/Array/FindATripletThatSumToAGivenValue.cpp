// Given an array and a value, find if there is a triplet in array whose sum is equal to the given value.If there is such a triplet present in array, then print the triplet and return true.Else return false.

// Complexity Analysis:
//     Time Complexity: O(n3).
//     There are three nested loops traversing the array, so the time complexity is O(n^3)
//     Space Complexity: O(1).
//     As no extra space is required.
// #include <iostream>
// using namespace std;

// bool func(int arr[], int n, int sum)
// {
//     for (int i = 0; i < n - 2; i++)
//     {
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == sum)
//                 {
//                     cout << "Triplet found: " << arr[i] << " " << arr[j] << " " << arr[k];
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {12, 3, 4, 1, 6, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 24;
//     func(arr, n, sum);
// }
// ______________________________________________
// Complexity Analysis:
//     Time complexity: O(N^2).
//     There are only two nested loops traversing the array, so time complexity is O(n^2). Two pointers algorithm takes O(n) time and the first element can be fixed using another nested traversal.
//     Space Complexity: O(1).
//     As no extra space is required.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool func(int arr[], int n, int sum)
{
    int left;
    int right;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] == sum)
            {
                cout << "Triplet found: " << arr[i] << " " << arr[left] << " " << arr[right];
                return true;
            }
            else if (arr[i] + arr[left] + arr[right] > sum)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 24;
    func(arr, n, sum);
}