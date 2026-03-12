#include <iostream>

using namespace std;

int main()
{
    int m, p, l, e, r, s, n;
    while (cin >> m)
    {
        cin >> p >> l >> e >> r >> s >> n;
        for (int i = 0; i < n; i++)
        {
            int pc = p;
            int lc = l;
            pc /= s;
            lc /= r;

            l = m * e;
            m = pc;
            p = lc;
        }
        cout << m << endl;
    }
    return 0;
}
