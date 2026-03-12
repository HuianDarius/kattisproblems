#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            a++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            b++;
        }
        else if(s[i] == '_')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    double a1 = a / double(s.size());
    double b1 = b / double(s.size());
    double c1 = c / double(s.size());
    double d1 = d / double(s.size());
    cout << c1 << endl;
    cout << a1 << endl;
    cout << b1 << endl;
    cout << d1 << endl;
    return 0;
}