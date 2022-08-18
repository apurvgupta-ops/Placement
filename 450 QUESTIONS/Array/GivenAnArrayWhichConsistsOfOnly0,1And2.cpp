#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    int i, c1 = 0, c2 = 0, c3 = 0;
    // Count the number of 0s, 1s and 2s in the array
    for (int i = 0; i < n; i++)
    {
        switch (arr[i])
        {
        case 0:
            c1++;
            break;

        case 1:
            c2++;
            break;

        case 2:
            c3++;
            break;

        default:
            break;
        }
    }
    // Update the array
    i = 0;
    while (c1 > 0)
    {
        arr[i] = c1;
        c1--;
    }
    while (c2 > 0)
    {
        arr[i] = c2;
        c2--;
    }
    while (c3 > 0)
    {
        arr[i] = c3;
        c3--;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 0, 0, 0, 2, 1, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "sorted:";
    printArr(arr, n);
    sorting(arr, n);
    printArr(arr, n);
}
// Approach: Count the number of 0s, 1s and 2s in the given array. Then store all the 0s in the beginning followed by all the 1s then all the 2s.

//     Algorithm:
//         Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
//         Traverse through the array and increase the count of c0 if the element is 0,increase the count of c1 if the element is 1 and increase the count of c2 if the element is 2
//         Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2.