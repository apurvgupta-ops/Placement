#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// string func(string str)
// {
//     int n = str.length();
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (str[i] == str[j] && str[i] != ' ')
//             {
//                 count++;
//                 str[j] = '0';
//             }
//         }
//         if (count > 1 && str[i] != '0')
//         {
//             cout << str[i];
//         }
//     }
// }

int main()
{
    string str = "strings";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                count++;
                str[j] = '0';
            }
        }
        if (count > 1 && str[i] != '0')
        {
            cout << str[i];
        }
    }
    // cout << "Duplicate Characters are: " << func(str);
}