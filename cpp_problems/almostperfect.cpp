#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        int s = 1;
        for(int i = 2; i * i <= n; i++) {
            if(n % i ==0) {
                s+= i;
                if(n / i != i) {
                    s+= n / i;
                }
            }
        }
        if(s == n) {
            cout << n << " perfect" << endl;
        } else if(abs(n - s) <= 2) {
            cout << n << " almost perfect" << endl;
        } else {
            cout << n << " not perfect" << endl;
        }
    }
    return 0;
}