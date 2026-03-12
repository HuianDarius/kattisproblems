#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string n, m;
    cin >> n >> m;
    if(m == "1") {
        cout << n;
        return 0;
    }
    if(n.length() < m.length()) {
        cout << "0.";
        for(int i = 0; i < m.length() - n.length() - 1; i++) {
            cout << 0;
        }
        cout << n;
        return 0;
    }
    int a = m.length() - 1;
    cout << n.substr(0, n.length() - a);
    int b = a;
    for(int i = 1; i <= a; i++) {
        if(n[n.length() - i] != '0') {
            break;
        }
        b--;
    }
    if(b > 0) {
        cout << "." << n.substr(n.length() - a, b);
    }
    cout << endl;
    return 0;
}