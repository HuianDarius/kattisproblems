#include <iostream>
using namespace std;
int main()
{
    int n, a, b = 0, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(i % 2 == 1)
        {
            c+= a - b;
        }
        b = a;
    }
    if(n % 2 == 1)
    {
        cout << "still running" << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}