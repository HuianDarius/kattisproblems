#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = -1;
    string s, ss = "COV";
    cin >> s;
    n = s.find(ss);
    if(n >= 0)
    {
        cout << "Veikur!" << endl;
    }
    else
    {
        cout << "Ekki veikur!" << endl;
    }
    return 0;
}