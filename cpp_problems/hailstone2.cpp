#include <iostream>

using namespace std;

int main()
{
    long long n, t = 1;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        t+= 1;
    }
    cout << t << endl;
    return 0;
}
