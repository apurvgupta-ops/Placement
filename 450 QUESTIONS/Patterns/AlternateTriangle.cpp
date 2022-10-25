#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int z = 0; z < n; z++)
    {
        for (int y = 1; y < i; y++)
        {
            cout << y;
        }
    }
    cout << endl;
}