// Given a string S of valid parentheses “(“ and “)”, the task is to print the string obtained by removing the outermost parentheses of every primitive substring from S.

// Approach: Follow the steps below to solve the problem:

//     Initialize a variable count to store the number of opening parentheses, i.e. ‘(‘.
//     Add every ‘(‘ to the result if count is greater than 0, i.e. add all ‘(‘ after the first ‘(‘ of a primitive substring is encountered.
//     Add every ‘)’ to the result if count is greater than 0, i.e. add all ‘)’ before the last ‘)’ of a primitive substring is encountered.
//     Finally, print the resultant string obtained.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string str)
{
    int count = 0;
    string res;
    int len = str.length();
    for (char i = 0; i < len; i++)
    {
        if (str[i] == '(' && count++ > 0)
        {
            res += str[i];
        }

        if (str[i] == ')' && count-- > 1)
        {
            res += str[i];
        }
    }
    return res;
}

int main()
{
    string S = "(()())(())()";
    cout << removeOuterParentheses(S);
}