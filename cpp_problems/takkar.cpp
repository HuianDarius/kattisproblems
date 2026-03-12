#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << "MAGA!" << '\n';
    }
    else if(b > a){
        cout << "FAKE NEWS!" << '\n';
    }
    else{
        cout << "WORLD WAR 3!" << '\n';
    }
    return 0;
}