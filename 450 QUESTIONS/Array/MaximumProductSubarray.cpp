// TIme complexity = O(n2)
#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int multiply = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            result = max(result, multiply);
            multiply *= arr[j];
        }
        result = max(result, multiply);
    }
    return result;
}

int main()
{
    int arr[] = {
        7,
        -8,
        -2,
        0,
        -3,
        -2,
        1,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum product is: " << func(arr, n);
}