#include <iostream>

using namespace std;

int main()
{
    int n, w, h, a;
    cin >> n >> w >> h;
    double b = (w * w) + (h * h);
    while (n > 0) {
        cin >> a;
        if (b >= a * a) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
        n--;
    }
    return 0;
}
