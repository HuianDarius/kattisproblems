#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, n;
    cin >> v >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        int k;
        cin >> s >> k;
        if(k < v)
        {
            cout << s << " lokud" << endl;
        }
        else
        {
            cout << s << " opin" << endl;
        }
    }
    return 0;
}
