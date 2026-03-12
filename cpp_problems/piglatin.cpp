#include <iostream>
#include <cstring>
using namespace std;
using ll = long long;

int main()
{
    ll len = 31000;
    char s[len];
    while (cin.getline(s, len))
    {
        ll lns = strlen(s);
        s[lns] = ' ';
        lns++;
        s[lns] = 0;
        for (int i = 0; i < lns; i++)
        {
            if (s[i] == ' ')
            {
                s[i] = 0;
            }
        }
        ll x = 1;
        for (int i = 0; i < lns; i++)
        {
            if (x == 1)
            {
                x = 0;
                if (strchr("aeiouy", s[i]))
                {
                    cout << &s[i] << "yay ";
                }
                else
                {
                    ll j = i;
                    while (!strchr("aeiouy", s[j]) && s[j] != 0)
                    {
                        j++;
                    }
                    if (s[j] != 0)
                    {
                        cout << &s[j];
                        s[j] = 0;
                        cout << &s[i] << "ay ";
                        s[j] = 'a';
                    }
                    else
                    {
                        cout << &s[i] << "ay ";
                    }
                }
            }
            if (s[i] == 0)
            {
                x = 1;
            }
        }
        cout << endl;
    }
    return 0;
}