#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sold = 0;
    long long minim = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sold += t;
        minim = min(minim, sold);
    }
    cout << -minim << "\n";
    return 0;
}
