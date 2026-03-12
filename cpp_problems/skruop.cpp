#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 7;
    string s;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        getline(cin, s);
        if(s == "Skru op!" && k < 10)
        {
            k+= 1;
        }
        else if(s == "Skru ned!" && k > 0)
        {
            k-= 1;
        }
    }
    cout << k << endl;
    return 0;
}