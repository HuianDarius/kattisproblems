#include <iostream>
using namespace std;
int main()
{
    long long n, s = 0;
    cin >> n;
    while(n > 0)
    {
        s = s * 2 + n % 2;
        n/= 2;
    }
    cout << s << endl;
    return 0;
}