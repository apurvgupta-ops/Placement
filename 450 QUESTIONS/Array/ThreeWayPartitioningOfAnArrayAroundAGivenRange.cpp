// Given an array and a range [lowVal, highVal], partition the array around the range such that array is divided in three parts.

//     All elements smaller than lowVal come first.
//     All elements in range lowVal to highVal come next.
//     All elements greater than highVal appear in the end.
// Time Complexity : O(n)
// Auxiliary Space: O(1)

#include <iostream>
using namespace std;

void func(int arr[], int n, int lowVal, int highVal)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n;)
    {
        if (arr[i] < lowVal)
        {
            if (i == start)
            {
                start++;
                i++;
            }
            else
            {
                swap(arr[i], arr[start]);
                start++;
                i++;
            }
        }
        else if (arr[i] > highVal)
        {
            swap(arr[i], arr[end]);
            end--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    func(arr, n, 10, 20);

    cout << "Modified array \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}