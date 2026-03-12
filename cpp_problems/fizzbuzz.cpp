#include <iostream>

using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int a = 1;
    while (a <= n) {
        if (a % x == 0 && a % y == 0) {
            cout << "FizzBuzz" << endl;
        } else if (a % x == 0) {
            cout << "Fizz" << endl;
        } else if (a % y == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << a << endl;
        }
        a = a + 1;
    }
    return 0;
}
