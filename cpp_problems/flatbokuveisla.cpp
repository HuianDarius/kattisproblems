#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int leftovers = n % m;
    cout << leftovers << endl;
    return 0;
}
