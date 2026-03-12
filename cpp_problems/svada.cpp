#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll coco(ll a[], ll b[], ll n, ll s) {
    ll x=0;
    for(ll i = 0; i < n; i++) {
        if(s < a[i]) {
            continue;
        }
        x+= (s - a[i]) / b[i];
        x+= 1;
    }
    return x;
}
int main() {
    ll t, m1, m2;
    cin >> t >> m1;
    ll a[m1], b[m1];
    for (ll i = 0; i < m1; i++) {
        cin >> a[i] >> b[i];
    }
    cin >> m2;
    ll c[m2], d[m2];
    for (ll i = 0; i < m2; i++) {
        cin >> c[i] >> d[i];
    }
    ll l = 0, r = t;
    ll sol = -1;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(coco(a, b, m1, mid) <= coco(c, d, m2, t - mid)){
            sol = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << sol << endl;
    return 0;
}
