#include <iostream>
using namespace std;
int main()
{
    char str[3];
    char x, y, z;
    int d;
    cin >> str >> d;
    x = str[0];
    y = str[1];
    z = str[2];
    if ((x == 'D' && y == 'E' && z == 'C' && d == 25) || (x == 'O' && y == 'C' && z == 'T' && d == 31))
    {
        cout << "yup" << endl;
        return 0;
    }
    cout << "nope" << endl;
    return 0;
}