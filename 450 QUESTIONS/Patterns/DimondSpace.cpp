#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i > (n - j + 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

            if ((i + n) > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i < j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            if (i <= ((2 * n) - j))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}