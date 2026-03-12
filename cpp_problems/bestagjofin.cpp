#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, mx = -1;
    string s1, s2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s1 >> a;
        if(a > mx){
            s2 = s1;
            mx = a;
        }
    }
    cout << s2 << '\n';
    return 0;
}