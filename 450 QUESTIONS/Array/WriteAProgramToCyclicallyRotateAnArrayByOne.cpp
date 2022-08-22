// Following are steps.
// 1) Store last element in a variable say x.
// 2) Shift all elements one position ahead.
// 3) Replace first element of array with x.
// #include <iostream>
// using namespace std;

// void func(int arr[], int n)
// {
//     int lastno = arr[n - 1];
//     for (int i = n - 1; i >= 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = lastno;
// }

// int printArray(int arr[], int n)
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
//     func(arr, n);
//     printArray(arr, n);
// }

// ___________________________________________________________________________
// Another approach:
// We can use two pointers, say i and j which point to first and last element of array respectively. As we know in cyclic rotation we will bring last element to first and shift rest in forward direction, so start swaping arr[i] and arr[j] and keep j fixed and i moving towards j.  Repeat till i is not equal to j.
#include <iostream>
using namespace std;

void func(int arr[], int n)
{
    int i = 0;
    int j = arr[n - 1];
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
}

int printArray(int arr[], int n)
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
    func(arr, n);
    printArray(arr, n);
}