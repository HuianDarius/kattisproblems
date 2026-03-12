#include <iostream>
using namespace std;

int main(){
    double v, a, t, d;
    cin >> v >> a >> t;
    d = (v * t) + (a * t * t) / 2;
    cout << d << '\n';
    return 0;
}