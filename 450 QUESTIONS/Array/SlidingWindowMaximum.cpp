// Time complexity = O(n*k)
// Space complexity = O(1)

#include <iostream>
using namespace std;

void func(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int max = arr[i];
        for (int j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
            {
                max = arr[i + j];
            }
        }
        cout << max << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    func(arr, n, k);
}