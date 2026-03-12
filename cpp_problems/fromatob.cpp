#include <iostream>
using namespace std;
int main() {
    long long a, b, sol = 0;
    cin >> a >> b;
    while(a != b) {
        if(a > b) {
            if(a % 2 == 0) {
                a/= 2;
                sol++;
            } else {
                a+= 1;
                sol++;
            }
        } else {
            a+= 1;
            sol++;
        }
    }
    cout << sol << endl;
    return 0;
}
