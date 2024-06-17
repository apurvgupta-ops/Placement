// Square pattern
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSquare()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTriange()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTrianleWithNumber()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void rightAngledTrianleWithSameNumber()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void reverseRightAngledTriangle()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void reverseRightAngledTrianleWithNumber()
{
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void triangle()
{
    int n = 5;
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

void reverseTriangle()
{
    int n = 5;
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

int main()
{
    // printSquare();
    // rightAngledTriange();
    // rightAngledTrianleWithNumber();
    // rightAngledTrianleWithSameNumber();
    // reverseRightAngledTriangle();
    // reverseRightAngledTrianleWithNumber();
    // triangle();
    reverseTriangle();
}