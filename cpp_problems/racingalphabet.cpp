#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        double total = 0;
        string s;
        getline(cin, s);
        for(int j = 1; j < s.size(); j++)
        {
            int spot1, spot2;
            spot1 = s[j-1] - 'A';
            spot2 = s[j] - 'A';
            if(s[j-1] == ' ')
            {
                spot1 = 26;
            }
            if(s[j-1] == '\'')
            {
                spot1 = 27;
            }
            if(s[j] == ' ')
            {
                spot2 = 26;
            }
            if(s[j] == '\'')
            {
                spot2 = 27;
            }
            if(abs(spot1-spot2)>14)
            {
                total+=28-abs(spot1-spot2);
            }
            else
            {
                total+=abs(spot1-spot2);
            }
        }
        total*= M_PI;
        total = total * 60.0 / 28 / 15;
        total+= s.length();
        cout << fixed;
        cout.precision(10);
        cout << total << endl;
    }
    return 0;
}