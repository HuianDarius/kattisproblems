#include <iostream>

using namespace std;

int main()
{
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    int ra, rb;
    if (a1 == a2)
    {
        ra = a3;
    }
    else if (a1 == a3)
    {
        ra = a2;
    }
    else
    {
        ra = a1;
    }
    if (b1 == b2)
    {
        rb = b3;
    }
    else if (b1 == b3)
    {
        rb = b2;
    }
    else
    {
        rb = b1;
    }
    cout << ra << " " << rb;
    return 0;
}
