// We are given a string having parenthesis like below
//      “( ((X)) (((Y))) )”
// We need to find the maximum depth of balanced parenthesis, like 4 in the above example. Since ‘Y’ is surrounded by 4 balanced parentheses.
// If parenthesis is unbalanced then return -1.

// Time Complexity: O(N) where n is number of elements in given string. As, we are using a loop to traverse N times so it will cost us O(N) time
// Auxiliary Space: O(n), as we are using extra space for stack.

// #include <bits/stdc++.h>
// using namespace std;

// int maxDepth(string s)
// {
//     int count = 0;
//     stack<int> st;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '(')
//         {
//             st.push(i);
//         }
//         else if (s[i] == ')')
//         {
//             if (count < st.size())
//             {
//                 count = st.size();
//             }
//             st.pop();
//         }
//     }
//     return count;
// }
// int main()
// {
//     string s = "( ((X)) (((Y))) )";
//     cout << maxDepth(s);
// }

// ____________________________________________________________
// Time Complexity: O(N) where n is number of elements in given string. As, we are using a loop to traverse N times so it will cost us O(N) time
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int maxCount = 0;
    int currCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            currCount++;
            if (currCount > maxCount)
            {
                maxCount = currCount;
            }
        }
        else if (s[i] == ')')
        {
            if (currCount > 0)
            {
                currCount--;
            }
            else
            {
                return -1;
            }
        }
    }
    if (currCount != 0)
    {
        return -1;
    }

    return maxCount;
}

int main()
{
    string s = "( ((X)) (((Y)) )";
    cout << maxDepth(s);
}