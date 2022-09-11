#include <iostream>
using namespace std;

string func(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        string res;
        for (int j = i; j < n; j++)
        {
            res += str[j];
            cout << res << endl;
        }
    }
}

int main()
{
    string str = "abcd";
    func(str);
}