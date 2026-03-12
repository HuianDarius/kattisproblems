#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x1, x2;
    cin >> x1 >> x2;
    int n1;
    cin >> n1;
    vector<int> v1(n1);
    for(int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for(int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }
    int p1 = x1;
    int p2 = x2;
    int i1 = 0;
    int i2 = 0;
    bool r1 = false;
    bool r2 = false;
    for(int i = 0; i < 10000001; i++)
    {
        if(r1)
        {
            p1++;
        }
        if(r2)
        {
            p2++;
        }
        if(abs(p1 - p2) < 5)
        {
            cout << "bumper tap at time " << i << endl;
            return 0;
        }
        if(i1 < n1 && v1[i1] == i)
        {
            r1 = !r1;
            i1++;
        }
        if(i2 < n2 && v2[i2] == i)
        {
            r2 = !r2;
            i2++;
        }
    }
    cout << "safe and sound" << endl;
    return 0;
}