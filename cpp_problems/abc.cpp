#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int m1 = min(min(a,b),c);
    int m3 = max(max(a,b),c);
    int m2 = (a + b + c) - (m1 + m3);
    if (c1 == 'A') {
        cout << m1;
    }
    if (c1 == 'B') {
        cout << m2;
    }
    if (c1 == 'C') {
        cout << m3;
    }
    cout << " ";
    if (c2 == 'A') {
        cout << m1;
    }
    if (c2 == 'B') {
        cout << m2;
    }
    if (c2 == 'C') {
        cout << m3;
    }
    cout << " ";
    if (c3 == 'A') {
        cout << m1;
    }
    if (c3 == 'B') {
        cout << m2;
    }
    if (c3 == 'C') {
        cout << m3;
    }

    return 0;
}
