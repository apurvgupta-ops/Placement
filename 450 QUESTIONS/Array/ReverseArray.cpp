// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int start, int end)
// {

//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
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

//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printArray(arr, size);
//     reverseArray(arr, 0, size - 1);
//     cout << "Reversed Array is" << endl;
//     printArray(arr, size);
// }

// _________________________________________________________
// Recursive approch
// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int start, int end)
// {
//     // edge case
//     if (start >= end)
//     {
//         return;
//     }
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     reverseArray(arr, start + 1, end - 1);
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
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printArray(arr, n);
//     reverseArray(arr, 0, n - 1);
//     printArray(arr, n);
// }

// _________________________________________________________
// Reverse Traversing
#include <iostream>
using namespace std;

void array(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    array(arr, n);
    printArray(arr, n);
}