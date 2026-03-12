#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if(d > 0){
        cout << 2 << '\n';
    }
    else if(d == 0){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    return 0;
}