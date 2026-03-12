#include <iostream>
using namespace std;

int main(){
    int xp, yp, xg, yg;
    cin >> xp >> yp >> xg >> yg;
    if(xp == xg || yp == yg){
        cout << 1 << '\n';
    }
    else{
        cout << 2 << '\n';
    }
    return 0;
}
