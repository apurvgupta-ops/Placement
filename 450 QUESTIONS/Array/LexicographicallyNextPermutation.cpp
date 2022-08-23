// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s = {"abcd"};
//     bool value = next_permutation(s.begin(), s.end());
//     if (value == false)
//     {
//         cout << "No Permutation";
//     }
//     else
//     {
//         cout << s;
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &arr)
{
    // Traversing from right side.
    int idx = -1;
    int n = arr.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        int newidx = idx;
        for (int i = idx + 1; i < n; i++)
        {
            if (arr[i] <= arr[newidx] and arr[i] > arr[idx - 1])
            {
                newidx = i;
            }
        }
        swap(arr[newidx], arr[idx - 1]);
        reverse(arr.begin() + idx, arr.end());
    }
}

void printArray(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr);
    func(arr);
    printArray(arr);
}