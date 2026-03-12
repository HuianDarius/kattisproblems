#include <iostream>
using namespace std;
int main()
{
    int mxn = 0, mxs = 1, s, n1, n2, n3, n4;
    for(int i = 1; i < 6; i++)
    {
        cin >> n1 >> n2 >> n3 >> n4;
        s = n1 + n2 + n3 + n4;
        if(s > mxs)
        {
            mxn = i;
            mxs = s;
        }
    }
    cout << mxn << " " << mxs << endl;
    return 0;
}