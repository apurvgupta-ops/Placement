// Method 1 (Linear Search)
// #include <iostream>
// using namespace std;

// int MinimumNo(int arr[], int low, int high)
// {
//     int min = INT8_MAX;
//     for (int i = low; i < high; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 33, 44, 22, 11, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "min element is" << MinimumNo(arr, 0, n - 1);
// }

// ________________________________________________________
// Method 2 (Binary Search – Recursive Solution)
// #include <iostream>
// using namespace std;

// int MinimumNo(int arr[], int low, int high)
// {
//     // mid of the array
//     int mid = (low + high) / 2;

//     if (arr[mid] <= arr[mid - 1] && arr[mid] <= arr[mid + 1])
//     {
//         return arr[mid];
//     }
//     else if (arr[mid] < arr[mid + 1])
//     {
//         return MinimumNo(arr, mid + 1, high);
//     }
//     else
//     {
//         return MinimumNo(arr, low, mid - 1);
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 0, 5, 33, 44, 22, 11, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "min element is" << MinimumNo(arr, 0, n - 1);
// }

// Method 3 Using Library functions:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minNo(int arr[], int n)
{
    return *min_element(arr, arr + n);
}
int main()
{
    int arr[] = {1, 2, 3, 0, 5, 33, 44, 22, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "min element is" << minNo(arr, n);
}