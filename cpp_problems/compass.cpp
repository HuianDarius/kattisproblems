#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int m = n2 - n1;
    if(m > 180)
    {
        m-= 360;
    }
    else if(m < -180)
    {
        m+= 360;
    }
    else if(m == -180)
    {
        m = 180;
    }
    cout << m << endl;
    return 0;
}
