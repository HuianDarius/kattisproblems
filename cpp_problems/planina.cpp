#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1 << n;
    cout << (a + 1) * (a + 1) << endl;
    return 0;
}