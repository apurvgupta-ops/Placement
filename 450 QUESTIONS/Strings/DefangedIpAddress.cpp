// Defanging means replace '.' to [.];
#include <iostream>
using namespace std;

string func(string str)
{
    int n = str.size();
    string defangIp = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            defangIp += "[.]";
        }
        else
        {
            defangIp += str[i];
        }
    }
    return defangIp;
}

int main()
{
    string str = "255.100.50.0";
    cout << func(str);
    return 0;
}