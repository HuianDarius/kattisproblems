#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        int a = 0, b = 0;
        string action;
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> action >> num;
            if(action == "DROP")
            {
                b+= num;
                cout << "DROP 2 " << num << endl;
            }
            else if(action == "TAKE")
            {
                if(a >= num)
                {
                    a-= num;
                    cout << "TAKE 1 " << num << endl;
                }
                else
                {
                    if(a != 0)
                    {
                        cout << "TAKE 1 " << a << endl;
                        num-= a;
                        a = 0;
                    }
                    cout << "MOVE 2->1 " << b << endl;
                    a = b - num;
                    b = 0;
                    cout << "TAKE 1 " << num << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}



