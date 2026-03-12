#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    cin >> p;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        int b = max(p, a);
        int c = min(p, a);
        while (c != 0)
        {
            int d = b;
            b = c;
            c = d % c;
        }
        cout << p / b << "/" << a / b << endl;
    }
    return 0;
}
