#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 4 == 0)
    {
        cout << "Even" << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Either" << endl;
    }
    return 0;
}
