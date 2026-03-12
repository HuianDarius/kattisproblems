#include <iostream>
using namespace std;

int main(){
    int a, b, v, c, shav = 0, shac = 0, shbv = 0, shbc = 0;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        cin >> v >> c;
        shav+= v;
        shac+= v * c;
    }
    for(int i = 0; i < b; i++){
        cin >> v >> c;
        shbv+= v;
        shbc+= v * c;
    }
    if(shav == shbv && shac == shbc){
        cout << "same" << '\n';
    }
    else{
        cout << "different" << '\n';
    }
    return 0;
}