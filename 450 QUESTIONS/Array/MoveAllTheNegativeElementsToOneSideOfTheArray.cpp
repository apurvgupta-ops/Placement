// method 1: Sorting
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void func(int arr[], int n)
// {
//     sort(arr, arr + n);
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {1, 2, -3, -6, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sorted arr is: ";
//     // printArray(arr, n);
//     func(arr, n);
//     printArray(arr, n);
// }

// _________________________________________________
// method 2 Partition process of quicksort

// #include <iostream>
// using namespace std;

// void func(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             if (i != j)
//             {
//                 swap(arr[i], arr[j]);
//             }
//             j++;
//         }
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, -6, -3, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sorted arr is: ";
//     // printArray(arr, n);
//     func(arr, n);
//     printArray(arr, n);
// }

//____________________________________________________________
// Approach 3:
// Here, we will use the famous Dutch National Flag Algorithm for two “colors”. The first color will be for all negative integers and the second color will be for all positive integers. We will divide the array into three partitions with the help of two pointers, low and high.

//     ar[1…low-1] negative integers
//     ar[low…high] unknown
//     ar[high+1…N] positive integers

// Now, we explore the array with the help of low pointer, shrinking the unknown partition, and moving elements to their correct partition in the process. We do this until we have explored all the elements, and size of the unknown partition shrinks to zero.

// Below is the implementation of the above approach:

#include <iostream>
using namespace std;

void func(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, -6, -3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sorted arr is: ";
    // printArray(arr, n);
    func(arr, n);
    printArray(arr, n);
}