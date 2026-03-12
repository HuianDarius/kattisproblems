#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int i = 0;
    cin >> n >> k;
    while (i < n)
    {
        int x;
        cin >> x;
        if (x > k)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    if (i < n)
    {
        cout << "It hadn't snowed this early in " << i << " years!" << endl;
    }
    else
    {
        cout << "It had never snowed this early!" << endl;
    }
    return 0;
}
