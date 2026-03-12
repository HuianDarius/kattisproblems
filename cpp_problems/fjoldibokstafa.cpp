#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if((int(s[i]) >= 65 && int(s[i] <= 90)) || (int(s[i]) >= 97 && int(s[i] <= 122))){
            a++;
        }
    }
    cout << a << '\n';
    return 0;
}