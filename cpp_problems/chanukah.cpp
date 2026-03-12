#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int k, n, a = 0;
        cin >> k >> n;
        for(int i = 1; i < n + 1; i++)
        {
            a+= i;
        }
        cout << k << " " << a + n << endl;
        a = 0;
    }
    return 0;
}