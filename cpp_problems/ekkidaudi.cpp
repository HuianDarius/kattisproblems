#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int a, b;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != '|')
        {
            cout << s1[i];
        }
        if(s1[i] == '|')
        {
            a = i + 1;
            i = s1.length();
        }
    }
    for(int i = 0; i < s2.length(); i++)
    {
        if(s2[i] != '|')
        {
            cout << s2[i];
        }
        if(s2[i] == '|')
        {
            b = i + 1;
            i = s2.length();
        }
    }
    cout << " ";
    for(int i = a; i < s1.length(); i++)
    {
        if(s1[i] != '|')
        {
            cout << s1[i];
        }
    }
    for(int i = b; i < s2.length(); i++)
    {
        if(s2[i] != '|')
        {
            cout << s2[i];
        }
    }
    cout << endl;
    return 0;
}