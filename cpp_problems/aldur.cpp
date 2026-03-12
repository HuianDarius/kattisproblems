#include <iostream>
using namespace std;

int main(){
    int a, v, mn = 1e6;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> v;
        if(v < mn){
            mn = v;
        }
    }
    cout << mn << '\n';
    return 0;
}