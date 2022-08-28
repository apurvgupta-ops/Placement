// Time Complexity : O(m *n)
// Auxiliary Space : O(1)
#include <iostream>
using namespace std;

bool func(int arr1[], int arr2[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Subset No are: ";
    if (func(arr1, arr2, n, m))
    {
        cout << "arr2 is a subset of arr1" << endl;
        ;
    }
    else
    {

        cout << "arr2 is not  a subset of arr1" << endl;
    }
}