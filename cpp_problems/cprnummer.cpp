#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    vector<int> v = {4, 3, 2, 7, 6, 5, 0, 4, 3, 2, 1};
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '-')
        {
            sum+= (s[i] - '0') * v[i];
        }
    }
    if(sum % 11 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}