// Time complexity = O(n2)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &arr, int sum)
{
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {1, 5, 7, -1, 5};
    int sum = 6;
    cout << "Count pairs are: " << func(arr, sum);
}