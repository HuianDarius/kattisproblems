#include <bits/stdc++.h>
using namespace std;
int notdominant(char c)
{
    switch(c)
    {
    case 'A':
        return 11;
    case 'K':
        return 4;
    case 'Q':
        return 3;
    case 'J':
        return 2;
    case 'T':
        return 10;
    }
    return 0;
}
int dominant(char c)
{
    switch(c)
    {
    case 'A':
        return 11;
    case 'K':
        return 4;
    case 'Q':
        return 3;
    case 'J':
        return 20;
    case 'T':
        return 10;
    case '9':
        return 14;
    }
    return 0;
}
int main()
{
    int n;
    char b;
    cin >> n >> b;
    char x, y;
    int a = 0;
    while(cin >> x && cin >> y)
    {
        if(y == b)
        {
            a+= dominant(x);
        }
        else
        {
            a+= notdominant(x);
        }
    }
    cout << a << endl;
    return 0;
}