#include <iostream>

using namespace std;

int main()
{
    int n, a, s = 0;
    cin >> n;
    while (n > 0)
    {
        cin >> a;
        s+= a;
        n--;
    }
    cout << s << endl;
    return 0;
}
