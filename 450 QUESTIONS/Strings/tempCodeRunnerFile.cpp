
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(string str)
{
    char n = str.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    string str = "string";
    func(str);
}
