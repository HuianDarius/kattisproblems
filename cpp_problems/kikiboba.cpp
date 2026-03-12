#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 0, b = 0;
    string s;
    cin >> s;
    int sz = s.size();
    for(int i = 0; i < sz; i++)
    {
        if(s[i] == 'k')
        {
            k++;
        }
        if(s[i] == 'b')
        {
            b++;
        }
    }
    if(k > b)
    {
        cout << "kiki" << endl;
    }
    else if(k < b)
    {
        cout << "boba" << endl;
    }
    else if(k == b && k != 0)
    {
        cout << "boki" << endl;
    }
    else if(k == 0 && b == 0)
    {
        cout << "none" << endl;
    }
    else if(sz <= 1)
    {
        cout << "" << endl;
    }
    return 0;
}
