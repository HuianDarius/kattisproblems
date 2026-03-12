#include <iostream>
using namespace std;
int main()
{
    int n, v1[1001], v2[1001], c = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for(int j = 0; j < n - 1; j++)
    {
        cin >> v2[j];
    }
    for(int k1 = 0; k1 < n; k1++)
    {
        for(int k2 = 0; k2 < n; k2++)
        {
            if(v1[k1] == v2[k2])
            {
                c = 0;
                break;
            }
            else if(v1[k1] != v2[k2])
            {
                c = v1[k1];
            }
        }
        if(c != 0)
        {
            break;
        }
    }
    cout << c << endl;
    return 0;
}