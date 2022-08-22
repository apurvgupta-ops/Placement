// Method 1 (Linear Search)
// #include <iostream>
// using namespace std;
// int MaximumNo(int arr[], int low, int high)
// {
//     int max = 0;
//     for (int i = low; i <= high; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 33, 44, 22, 11, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "max element is" << MaximumNo(arr, 0, n - 1);
// }

// ________________________________________________________
// Method 2 (Binary Search – Recursive Solution)
// #include <iostream>
// using namespace std;

// int MaximumNo(int arr[], int low, int high)
// {
//     // If there are only one element
//     if (low == high)
//     {
//         return arr[high];
//     }

//     // find mid element
//     int mid = (low + high) / 2;

//     // if Mid is max element
//     if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
//     {
//         return arr[mid];
//     }

//     else if (arr[mid] < arr[mid + 1])
//     {
//         return MaximumNo(arr, mid + 1, high);
//     }
//     else
//     {
//         return MaximumNo(arr, low, mid - 1);
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 2222, 33, 44, 222, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "max element is" << MaximumNo(arr, 0, n - 1);
// }

// ________________________________________________________
// Method 3 (Binary Search – Iterative Solution)
// #include <iostream>
// using namespace std;

// int MaximumNo(int arr[], int low, int high)
// {
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
//         {
//             return arr[mid];
//         }
//         else if (arr[mid] >= arr[mid - 1])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return high;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 33, 44, 222, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "max element is: " << MaximumNo(arr, 0, n - 1);
// }

// ________________________________________________________
// Method 4 Sorting
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int MaximumNo(int arr[], int n)
// {
//     arr.sort();
//     int max = arr[n - 1];
//     return max;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 33, 44, 222, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "max element is: " << MaximumNo(arr, n);
// }

// Method 5 Using Library functions:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxNo(int arr[], int n)
{
    return *max_element(arr, arr + n);
}
int main()
{
    int arr[] = {1, 2, 3, 0, 5, 33, 44, 22, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "min element is" << maxNo(arr, n);
}