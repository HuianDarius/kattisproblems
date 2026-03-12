#include <iostream>

using namespace std;

int main()
{
    int k, m, n;
    cin >> k >> m >> n;
    int a = m + n;
    if (k % a < m)
    {
        cout << "Barb" << endl;
    }
    else
    {
        cout << "Alex" << endl;
    }
    return 0;
}
