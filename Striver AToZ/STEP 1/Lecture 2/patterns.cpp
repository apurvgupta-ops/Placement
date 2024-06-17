// Square pattern
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTriange(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTrianleWithNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void rightAngledTrianleWithSameNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void reverseRightAngledTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void reverseRightAngledTrianleWithNumber(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void reverseTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * n) - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void diamond(int n)
{
    // UPPER TRIANGLE
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (i * 2) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // LOWER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (n * 2) - (i * 2 + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void halfDiamond(int n)
{
    // UPPER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // LOWER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void alternateZeroOneInRightTriangleshape(int n)
{
    int start;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void twoJoinedRightTriangle(int n)
{
    int space = (n - 1) * 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}

void numberTriangle(int n)
{
    int count = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void alphabaticRightTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void sameAlphabaticRightTriangle(int n)
{
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // printSquare(n);
    // rightAngledTriange(n);
    // rightAngledTrianleWithNumber(n);
    // rightAngledTrianleWithSameNumber(n);
    // reverseRightAngledTriangle();
    // reverseRightAngledTrianleWithNumber(n);
    // triangle(n);
    // reverseTriangle(n);
    // diamond(n);
    // halfDiamond(n);
    // alternateZeroOneInRightTriangleshape(n);
    // twoJoinedRightTriangle(n);
    // numberTriangle(n);
    // alphabaticRightTriangle(n);
    sameAlphabaticRightTriangle(n);
}