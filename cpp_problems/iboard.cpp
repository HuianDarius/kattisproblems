#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        int unu = 0;
        int zero = 0;
        for(int i = 0; i < s.size(); i++)
        {
            char c =s [i];
            for(int j = 0; j < 7; j++)
            {
                if(c % 2 == 0)
                {
                    zero++;
                }
                else
                {
                    unu++;
                }
                c/=2;
            }
        }
        if(unu % 2 == 1 || zero % 2 == 1)
        {
            cout << "trapped" << endl;
        }
        else
        {
            cout << "free" << endl;
        }
    }
    return 0;
}
