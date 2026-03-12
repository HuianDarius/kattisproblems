#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    double a = (s1 + s2 + s3 + s4) / 2.0;
    cout << fixed;
    cout << setprecision(10);
    cout << sqrt((a - s1) * (a - s2) * (a - s3) * (a - s4));
    return 0;
}