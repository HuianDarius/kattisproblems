#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k, o, a = 0;
        cin >> k;
        for(int i = 0; i < k; i++)
        {
            cin >> o;
            a+= o - 1;
        }
        cout << a + 1 << endl;
    }
    return 0;
}