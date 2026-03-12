#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int mx = 0;
    int res = n;
    int crt = 0;
    while (n % 2 == 0)
    {
        crt++;
        n = n / 2;
    }
    if (mx < crt)
    {
        mx = crt;
        res = 2;
    }
    for (int i = 3; i * i <= n; i+= 2)
    {
        crt = 0;
        while (n % i == 0)
        {
            crt++;
            n = n / i;
        }
        if (mx < crt)
        {
            mx = crt;
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}