#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int chars = 65;
    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            char ch = char(chars + j - 1);
            cout << ch;
        }
        cout << endl;
    }
}
//     A
//    ABC
//   ABCDE
//  ABCDEFG
