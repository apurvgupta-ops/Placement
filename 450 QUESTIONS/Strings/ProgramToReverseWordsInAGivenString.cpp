// Given a sentence in the form of string str, the task is to reverse each word of the given sentence in C++.
// Method 1: Using STL functions

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string func(string str)
{
    reverse(str.begin(), str.end());
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0;
    for (char i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin() + j, str.begin() + i);
            j = i + 1;
        }
    }
    str.pop_back();
    return str;
}

int main()
{
    string str = "the sky is blue";
    cout << func(str);
}