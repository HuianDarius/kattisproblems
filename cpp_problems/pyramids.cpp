#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int i = 1;

    while(true)
    {
        a+= i * i;
        if(a <= n)
        {
            b+= 1;
            i+= 2;
        }
        else
        {
            break;
        }
    }
    cout << b << endl;
}