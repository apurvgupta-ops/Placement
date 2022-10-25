#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int chars = 65;
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = char(chars + j - 1);
            cout << ch;
        }
        cout << endl;
    }
}
// A
// AB
// ABC
// ABCD