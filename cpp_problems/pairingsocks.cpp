#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n * 2), vv;
    for (int i = 0; i < n * 2; i++) {
        cin >> v[i];
    }
    int m = 0;
    while (!v.empty()) {
        m++;
        if (vv.empty()) {
            vv.push_back(v.back());
            v.pop_back();
            continue;
        }
        if (v.back() == vv.back()) {
            v.pop_back();
            vv.pop_back();
            continue;
        }
        vv.push_back(v.back());
        v.pop_back();
    }
    if (vv.empty()) {
        cout << m << endl;
    } else {
        cout << "impossible" << endl;
    }
    return 0;
}
