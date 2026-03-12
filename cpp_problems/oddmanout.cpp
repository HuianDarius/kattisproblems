#include <iostream>
using namespace std;
int main()
{
    int n, g,v[1001], x = 0;
    cin >> n;
    for(int i1 = 0; i1 < n; i1++)
    {
        x = 0;
        cin >> g;
        for(int i2=0; i2 < g; i2++)
        {
            cin >> v[i2];
        }
        for(int i3 = 0; i3 < g; i3++)
        {
            for(int i4 = 0; i4 < g; i4++)
            {
                if(i3 == i4) {}
                else if (v[i3] == v[i4])
                {
                    x = 0;
                    break;
                }
                else if(v[i3] != v[i4])
                {
                    x = v[i3];
                }
            }
            if(x != 0)
            {
                break;
            }
        }

        cout << "Case #" << i1 + 1 << ": " << x << endl;
    }
    return 0;
}