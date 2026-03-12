#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        cout << a << endl;
        cout << b << endl;

        int r = a.size();
        for(int j = 0; j < r; j++)
        {
            if(a[j] == b[j])
            {
                cout << '.';
            }
            else
            {
                cout << '*';
            }
        }

        cout << endl << endl;
    }
}