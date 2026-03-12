#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, a, b, j = -1, k = 0;
    vector<int> v(1001, 0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        j++;
        cin >> a;
        if(j == 0)
        {
            b = a;
        }
        if(a % b == 0 && j != 0)
        {
            v[k] = a;
            j = -1;
            k+= 1;
        }
    }
    for(int z = 0; z < n; z++)
    {
        if(v[z] != 0)
        {
            cout << v[z] << endl;
        }
    }
    return 0;
}