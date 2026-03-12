#include <iostream>
using namespace std;
int main()
{
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int k;
        cin >> k;
        int n;
        cin >> n;
        int s1 = 0, s2 = 0, s3 = 0;
        s1 = (n * (2 * 1 + (n - 1) * 1)) / 2;
        s2 = (n * (2 * 1 + (n - 1) * 2)) / 2;
        s3 = (n * (2 * 2 + (n - 1) * 2)) / 2;
        cout << i + 1 << " " << s1 << " " << s2 << " " << s3 << endl;
    }
    return 0;
}