#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            if(v[i][j] == v[i][j + 1] && v[i][j + 1] == v[i][j + 2]) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n - 2; i++) {
            if(v[i][j] == v[i + 1][j] && v[i + 1][j] == v[i + 2][j]) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    int w = 0, b = 0;
    for(int i = 0; i < n; i++) {
        w = 0;
        b = 0;
        for(int j = 0; j < n; j++) {
            if(v[i][j] == 'W') {
                w+= 1;
            } else if(v[i][j] == 'B') {
                b+= 1;
            }
        }
        if(w != b) {
            cout << 0 << endl;
            return 0;
        }
    }
    for(int j = 0; j < n; j++) {
        w = 0;
        b = 0;
        for(int i = 0; i < n; i++) {
            if(v[i][j] == 'W') {
                w+= 1;
            } else if(v[i][j] == 'B') {
                b+= 1;
            }
        }
        if(w != b) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}