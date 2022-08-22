// method 1: Sorting
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int func(int arr[], int n)
// {
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             return arr[i];
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 6, 5, 8, 3, 3, 3, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Duplicate no is: " << func(arr, size);
// }

// USING VECTOR
// #include <bits/stdc++.h>
// using namespace std;

// int func(vector<int> &arr)
// {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             return arr[i];
//         }
//     }
// }

// int main()
// {
//     vector<int> arr;
//     arr = {1, 2, 6, 5, 8, 3, 3, 3, 3};
//     cout << "Duplicate no is: " << func(arr);
// }