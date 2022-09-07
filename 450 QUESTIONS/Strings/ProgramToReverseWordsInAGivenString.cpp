// Given a sentence in the form of string str, the task is to reverse each word of the given sentence in C++.
// Method 1: Using STL functions
// Time Complexity: O(n2)
// Auxiliary Space: O(1)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// string func(string str)
// {
//     reverse(str.begin(), str.end());
//     str.insert(str.end(), ' ');
//     int n = str.length();
//     int j = 0;
//     for (char i = 0; i < n; i++)
//     {
//         if (str[i] == ' ')
//         {
//             reverse(str.begin() + j, str.begin() + i);
//             j = i + 1;
//         }
//     }
//     str.pop_back();
//     return str;
// }

// int main()
// {
//     string str = "i love appu";
//     cout << func(str);
// }

// __________________________________________
// Method 2: Without using the inbuilt function:
// Time Complexity: O(n2)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int l, int r)
{
    while (l < r)
    {
        swap(str[l], str[r]);
        l++;
        r--;
    }
}

string func(string str)
{
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0;
    for (char i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            reverseString(str, j, i - 1);
            j = i + 1;
        }
    }
    str.pop_back();
    reverseString(str, 0, str.length() - 1);
    return str;
}

int main()
{
    string str = "i love appu";
    cout << func(str);
}