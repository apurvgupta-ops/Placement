#include <iostream>
using namespace std;

bool func(int arr[], int n)
{
    int givenSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == givenSum)
            {
                return true;
            }
        }
    }
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "we find it: " << func(arr, n);
}