// METHOD 1 (Simple)

//     Approach: Traverse through the array, and for every index, find the number of smaller elements on its right side of the array. This can be done using a nested loop. Sum up the counts for all index in the array and print the sum.
//     Algorithm:
//         Traverse through the array from start to end
//         For every element, find the count of elements smaller than the current number up to that index using another loop.
//         Sum up the count of inversion for every index.
//         Print the count of inversions.

// Complexity Analysis:
//     Time Complexity: O(n^2), Two nested loops are needed to traverse the array from start to end, so the Time complexity is O(n^2)
//     Space Complexity:O(1), No extra space is required.

#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Total Count Inversion are: " << func(arr, n);
}