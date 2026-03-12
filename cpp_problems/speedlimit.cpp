#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n != -1)
    {
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; ++i)
        {
            int a, b;
            cin >> a >> b;
            x += a *(b - y);
            y = b;
        }
        cout << x << " miles" << endl;
        cin >> n;
    }
    return 0;
}