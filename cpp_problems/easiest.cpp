#include <iostream>

using namespace std;

int sum(int nr)
{
    int res = 0;
    while (nr > 0)
    {
        res += nr % 10;
        nr /= 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int s = sum(n);
        int res = 0;
        int i = 11;
        bool found = false;
        while (!found)
        {
            if (sum(n * i) == s)
            {
                res = i;
                found = true;
            }
            i++;
        }
        cout << res << endl;
        cin >> n;
    }
    return 0;
}
