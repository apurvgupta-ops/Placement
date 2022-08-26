// Given an array of size n, find all elements in array that appear more than n/k times. For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. There are two elements that appear more than two times, 2 and 3.

// Time complexity = O(n2)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n, int k)
{
    int number = 0;
    for (int i = 0; i < n;)
    {
        int count = 1;
        while ((i + 1) < n && arr[i] == arr[i + 1])
        {
            number = arr[i];
            count++;
            i++;
        }
        if (count > (n / k))
        {
            cout << number;
        }
        i++;
    }
    cout << number;
}

int main()
{
    int arr[] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    func(arr, n, k);
}

// Moore voting Algorithm (Hash Map )
// Time complexity = o(N)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void func(vector<int> &a)
// {
//     int n = a.size();
//     int count = 0;
//     int number = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (count == 0)
//         {
//             number = a[i];
//         }
//         if (a[i] == number)
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }
//     cout << "Max occuring number is:" << number << "=> " << count << " Number of times";
// }

// int main()
// {
//     vector<int> a = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
//     func(a);
// }