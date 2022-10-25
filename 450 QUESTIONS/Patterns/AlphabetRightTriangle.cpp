#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int alpha = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = char(alpha);
            cout << ch;
        }
        alpha++;
        cout << endl;
    }
}
// A
// BB
// CCC
// DDDD
// EEEEE