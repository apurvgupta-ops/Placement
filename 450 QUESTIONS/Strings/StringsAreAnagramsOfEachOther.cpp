// Anagram means permutation of all the strings;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool CheckAnagrams(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    if (n != m)
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n; i++)
    {
        if (str1 == str2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERZI";
    if (CheckAnagrams(Str1, Str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}