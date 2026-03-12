#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        if(s.find("simon says") == 0)
        {
            s.erase(0,11);
            cout << s << endl;
        }
    }
    return 0;
}
