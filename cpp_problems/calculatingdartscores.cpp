#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 26, 27, 28, 30, 32, 33, 34, 36, 38, 39, 40, 42, 45, 48, 51, 54, 57, 60};
    for(int i : v)
    {
        for(int j : v)
        {
            for(int k : v)
            {
                if(i + j + k == n)
                {
                    if(i != 0)
                    {
                        if(i >= 0 && i <= 20)
                        {
                            cout << "single " << i << endl;
                        }
                        else if(i >= 22 && i <= 40 && i % 2 == 0)
                        {
                            cout << "double " << i / 2 << endl;
                        }
                        else if(i >= 21 && i <= 60 && i % 3 == 0)
                        {
                            cout << "triple " << i / 3 << endl;
                        }
                    }
                    if(j != 0)
                    {
                        if(j >= 0 && j <= 20)
                        {
                            cout << "single " << j << endl;
                        }
                        else if(j >= 22 && j <= 40 && j % 2 == 0)
                        {
                            cout << "double " << j / 2 << endl;
                        }
                        else if(j >= 21 && j <= 60 && j % 3 == 0)
                        {
                            cout << "triple " << j / 3 << endl;
                        }
                    }
                    if(k != 0)
                    {
                        if(k >= 0 && k <= 20)
                        {
                            cout << "single " << k << endl;
                        }
                        else if(k >= 22 && k <= 40 && k % 2 == 0)
                        {
                            cout << "double " << k / 2 << endl;
                        }
                        else if(k >= 21 && k <= 60 && k % 3 == 0)
                        {
                            cout << "triple " << k / 3 << endl;
                        }
                    }
                    return 0;
                }
            }
        }
    }
    cout << "impossible" << endl;
    return 0;
}
