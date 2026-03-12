#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int nop = 0;
    for(int i= 0; i < a.size(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            if((i + nop) % 4 == 0 || (i + nop) % 4 == 4);
            else if((i + nop) % 4 == 1)
            {
                nop+= 3;
            }
            else if(( i + nop) % 4 == 2)
            {
                nop+= 2;
            }
            else if((i + nop) % 4 == 3)
            {
                nop+= 1;
            }
        }
    }
    cout << nop;
    return 0;
}