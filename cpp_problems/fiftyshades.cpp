#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0;
    while(n--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'p' || s[i] == 'P')
            {
                if(s[i + 1] == 'i' || s[i + 1] == 'I')
                {
                    if(s[i + 2] == 'n' || s[i + 2] == 'N')
                    {
                        if(s[i + 3] == 'k' || s[i + 3] == 'K')
                        {
                            k++;
                            break;
                        }
                    }
                }
            }
            else if(s[i] == 'r' || s[i] == 'R')
            {
                if(s[i + 1] == 'o' || s[i + 1] ==  'O')
                {
                    if(s[i + 2] == 's' || s[i + 2] == 'S')
                    {
                        if(s[i+3] == 'e' || s[i + 3] == 'E')
                        {
                            k++;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(k == 0)
    {
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    else
    {
        cout << k;
    }
    return 0;
}
