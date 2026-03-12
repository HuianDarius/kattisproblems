#include <iostream>

using namespace std;

int main()
{
    int n, h, v;
    cin >> n >> h >> v;
    int a = n - h, b = n - v;
    if (a > h && b > v)
    {
        cout << a * b * 4;
    }
    else if (a > h && b < v)
    {
        cout << a * v * 4;
    }
    else if (a < h && b < v)
    {
        cout << h * v * 4;
    }
    else
    {
        cout << h * b * 4;
    }
    return 0;
}
