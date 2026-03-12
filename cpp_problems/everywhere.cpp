#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set<string> ss;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            ss.insert(s);
        }
        cout << ss.size() << endl;
    }
    return 0;
}