// Solution1: Brute Force-
// Intuition: We can use a new array of size n+m and put all elements of arr1 and arr2 in it, and sort it. After sorting it, but all the elements in arr1 and arr2.

// Approach:

//     Make an arr3 of size n+m.
//     Put elements arr1 and arr2 in arr3.
//     Sort the arr3.
//     Now first fill the arr1 and then fill remaining elements in arr2

// #include <bits/stdc++.h>
// using namespace std;

// void func(int arr1[], int arr2[], int n, int m)
// {
//     int arr3[n + m];
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arr3[k] = arr1[i];
//         k++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         arr3[k] = arr2[i];
//         k++;
//     }
//     sort(arr3, arr3 + n + m);
//     k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arr1[i] = arr3[k];
//         k++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         arr2[i] = arr3[k];
//         k++;
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr1[] = {1, 4, 6, 8};
//     int arr2[] = {2, 3, 5};
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);
//     cout << "Before Merging:" << endl;
//     printArray(arr1, n);
//     printArray(arr2, m);
//     func(arr1, arr2, n, m);
//     cout << "After Merging:" << endl;
//     printArray(arr1, n);
//     printArray(arr2, m);
// }