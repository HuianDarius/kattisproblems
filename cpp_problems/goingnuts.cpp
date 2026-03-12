#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sq = 0, cn;
    cin >> n;
    while(n != 0){
        for(int i = 0; pow(2, i) <= n; i++){
            cn = pow(2, i);
        }
        sq++;
        n-= cn;
    }
    cout << sq << '\n';
    return 0;
}