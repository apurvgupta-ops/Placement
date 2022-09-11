#include <bits/stdc++.h>
using namespace std;

int func(string str)
{
    int n = str.length();
    return n * (n + 1) / 2;
}

int main()
{
    string str = "abcde";
    cout << "Subtrings are:" << func(str);
}