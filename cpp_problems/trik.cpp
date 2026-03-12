#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int b = 1;
    for(char ch : s)
    {
        switch(ch)
        {
        case 'A':
            if(b == 1)
            {
                b = 2;
            }
            else if (b == 2)
            {
                b = 1;
            }
            break;
        case 'B':
            if(b == 2)
            {
                b = 3;
            }
            else if (b == 3)
            {
                b = 2;
            }
            break;
        case 'C':
            if(b == 1)
            {
                b = 3;
            }
            else if (b == 3)
            {
                b = 1;
            }
            break;
        }
    }
    cout << b << endl;
    return 0;
}