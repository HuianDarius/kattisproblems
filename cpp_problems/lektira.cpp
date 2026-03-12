#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    for(int i = 1; i < s.size() - 1; i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j, s.size() - j);
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            string res = a + b + c;
            v.push_back(res);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    return 0;
}