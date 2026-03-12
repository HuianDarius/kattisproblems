#include <iostream>
#include <cstring>
using namespace std;

using ll = long long;

ll func(char c)
{
    if(c == 'B' || c == 'F' || c == 'P' || c == 'V')
    {
        return 1;
    }
    else if(c == 'C' || c == 'G' || c == 'J' || c == 'K' ||
            c == 'Q' || c == 'S' || c == 'X' || c == 'Z')
    {
        return 2;
    }
    else if(c == 'D' || c == 'T')
    {
        return 3;
    }
    else if(c == 'L')
    {
        return 4;
    }
    else if(c == 'M' || c == 'N')
    {
        return 5;
    }
    else if(c == 'R')
    {
        return 6;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[21];
    while(cin >> s)
    {
        ll ln = strlen(s);
        for(int i = 0; i < ln; i++)
        {
            if(i == 0 || (func(s[i]) && i > 0 && func(s[i]) != func(s[i - 1])))
            {
                if(func(s[i]))
                {
                    cout << func(s[i]);
                }
            }
        }
        cout << endl;
    }
    return 0;
}
