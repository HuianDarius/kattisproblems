#include <iostream>

using namespace std;

int main()
{
    int n;
    int mas = 0, mis = 1000;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        mas = max(mas, a);
        mis = min(mis, b);
    }
    if (mas - mis <= 0)
    {
        cout << "gunilla has a point" << endl;
    }
    else
    {
        cout << "edward is right" << endl;
    }
    return 0;
}
