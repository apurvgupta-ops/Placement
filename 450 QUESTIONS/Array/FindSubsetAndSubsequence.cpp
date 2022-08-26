// A subsequence maintain relative ordering of elements but may or may not be a contiguous part of an array. For a sequence of size n, we can have 2^n-1 non-empty sub-sequences in total. A subset does not maintain relative ordering of elements and is neither a contiguous part of an array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &arr, vector<vector<int>> &ans, vector<int> output, int index)
{
    // Base Case
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // Exclude
    func(arr, ans, output, index + 1);

    // Include
    int number = arr[index];
    output.push_back(number);
    func(arr, ans, output, index + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    func(arr, ans, output, index);
    return ans;
}