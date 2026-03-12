#include <iostream>

using namespace std;

int main()
{
    int n, z;
    char a, b;
    b = 'Z';
    int c = 0;
    cin >> n;
    for (int i; i < n; i++) {
        cin >> a;
        if (a == b) {
            c +=1;
        }
        b = a;
    }
    cout << c << endl;
    return 0;
}
