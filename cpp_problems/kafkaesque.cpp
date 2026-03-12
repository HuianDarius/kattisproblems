#include <iostream>
using namespace std;
int main()
{
    int k, a, b = 1, c = 0;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> a;
        if(c > a)
        {
            b+= 1;
        }
        c = a;
    }
    cout << b << '\n';
    return 0;
}