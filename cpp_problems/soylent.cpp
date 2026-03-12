#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a % 400 == 0)
        {
            cout << a / 400 << endl;
        }
        else
        {
            cout << a / 400 + 1 << endl;
        }
    }
    return 0;
}