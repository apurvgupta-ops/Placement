// You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.

// In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.

// Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.

// Each answer[i] is calculated considering the initial state of the boxes.

// Input: boxes = "110"
// Output: [1,1,3]
// Explanation: The answer for each box is as follows:
// 1) First box: you will have to move one ball from the second box to the first box in one operation.
// 2) Second box: you will have to move one ball from the first box to the second box in one operation.
// 3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int func(string str)
// {
//     int n = str.length();
//     int right = 0;
//     int left = 0;
//     int steps = 0;
//     int ans[]  = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == '1')
//         {
//             steps += i;
//             right++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = steps;
//         if (str[i] == '1')
//         {
//             right--;
//             left++;
//         }
//         steps += left;
//         steps -= right;
//     }
//     return ans;
// }

// int main()
// {
//     string str = "110";
//     cout << func(str);
// }

// _______________________________________________________
// TC= o(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> func(string str)
{
    int n = str.length();
    vector<int> res(n);
    int ahead = 0;
    int behind = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            ahead++;
            res[0] += i;
        }
    }

    if (str[0] == '1')
    {
        ahead--;
        behind++;
    }

    for (int i = 1; i < n; i++)
    {
        res[i] += res[i - 1] - ahead + behind;
        if (str[i] == '1')
        {
            ahead--;
            behind++;
        }
    }
    return res;
}

int main()
{
    string str = "110";
    vector<int> ans = func(str);
    cout << ans;
}