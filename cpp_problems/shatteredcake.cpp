#include <iostream>
using namespace std;
int main()
{
    int w1, w2, l, n, a = 0;
    cin >> w1 >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> w2 >> l;
        a+= w2 * l;
    }
    int r = a / w1;
    cout << r << endl;
    return 0;
}
