// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <bits/stdc++.h>
using namespace std;

void func(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]";
            }
        }
    }
}

int main()
{
    int nums[] = {3, 2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    func(nums, n, target);
}