#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int alpha = 65;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = char(alpha + j - 1);
            cout << ch;
        }
        alpha++;
        cout << endl;
    }
}
// ABCDE
// BCDE
// CDE
// DE
// E
