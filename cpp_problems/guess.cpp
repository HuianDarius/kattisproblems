#include <iostream>
using namespace std;
int main()
{
    int n;
    string a;
    int l = 1, r = 1000;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        cout << mid << endl;
        cin >> a;
        if(a == "correct")
        {
            break;
        }
        else if(a == "higher")
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return 0;
}