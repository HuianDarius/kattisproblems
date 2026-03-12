#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    string s;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> s;
    }
    if(a == 1){
        cout << s << '\n';
    }
    else{
        cout << "blandad best" << '\n';
    }
    return 0;
}