#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
    int zi1 = -1, zi2 = -1, zi3 = -1, zi4 = -1, zi5 = -1, zi6 = -1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int crt;
        cin >> crt;
        if (crt == 1)
        {
            a1++;
            zi1 = i + 1;
        }
        else if (crt == 2)
        {
            a2++;
            zi2 = i + 1;
        }
        else if (crt == 3)
        {
            a3++;
            zi3 = i + 1;
        }
        else if (crt == 4)
        {
            a4++;
            zi4 = i + 1;
        }
        else if (crt == 5)
        {
            a5++;
            zi5 = i + 1;
        }
        else if (crt == 6)
        {
            a6++;
            zi6 = i + 1;
        }
    }
    if (a6 == 1)
    {
        cout << zi6 << endl;
    }
    else if (a5 == 1)
    {
        cout << zi5 << endl;
    }
    else if (a4 == 1)
    {
        cout << zi4 << endl;
    }
    else if (a3 == 1)
    {
        cout << zi3 << endl;
    }
    else if (a2 == 1)
    {
        cout << zi2 << endl;
    }
    else if (a1 == 1)
    {
        cout << zi1 << endl;
    }
    else
    {
        cout << "none" << endl;
    }
    return 0;
}