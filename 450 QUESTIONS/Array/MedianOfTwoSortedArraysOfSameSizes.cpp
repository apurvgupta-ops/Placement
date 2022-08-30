// There are 2 sorted arrays A and B of size n each.Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e.array of length 2n).The complexity should be O(log(n)).

#include <iostream>
using namespace std;

int func(int arr1[], int arr2[], int n)
{
    int arr1Pointer = 0;
    int arr2Pointer = 0;
    int median1 = -1;
    int median2 = -1;
    for (int i = 0; i <= n; i++)
    {
        if (arr1Pointer == n)
        {
            median1 = median2;
            median2 = arr2[0];
            break;
        }

        if (arr2Pointer == n)
        {
            median1 = median2;
            median2 = arr1[0];
            break;
        }

        if (arr1[arr1Pointer] <= arr2[arr2Pointer])
        {
            median1 = median2;
            median2 = arr1[arr1Pointer];
            arr1Pointer++;
        }
        else
        {
            median1 = median2;
            median2 = arr2[arr2Pointer];
            arr2Pointer++;
        }
    }
    return (median1 + median2) / 2;
}

int main()
{
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};

    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    if (n1 == n2)
        cout << "Median is "
             << func(ar1, ar2, n1);
    else
        cout << "Doesn't work for arrays"
             << " of unequal size";
    return 0;
}