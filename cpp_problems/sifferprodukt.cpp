#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int rest = a;
    while (rest >= 10)
    {
        int rest2 = 1;
        while (rest > 0)
        {
            if (rest % 10 != 0)
            {
                rest2 = rest2 * (rest % 10);
            }
            rest = rest / 10;
        }
        rest = rest2;
    }
    cout << rest << endl;
    return 0;
}
