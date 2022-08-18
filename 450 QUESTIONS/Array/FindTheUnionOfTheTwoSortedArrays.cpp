// To find union of two sorted arrays, follow the following merge procedure :
//     1) Use two index variables i and j, initial values i = 0, j = 0
//     2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
//     3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
//     4) If both are same then print any of them and increment both i and j.
//     5) Print remaining elements of the larger array.

#include <iostream>
using namespace std;

void func(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
            i++;
        }
    }

    while (i < n1)
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n2)
    {
        cout << arr2[j] << " ";
        j++;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 6, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    func(arr1, arr2, n1, n2);
}