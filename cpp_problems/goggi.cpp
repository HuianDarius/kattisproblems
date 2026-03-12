#include <iostream>
using namespace std;

int main(){
    int a, b;
    char c;
    cin >> a >> c >> b;
    if(a > b){
        cout << ">" << '\n';
    }
    else if(a < b){
        cout << "<" << '\n';
    }
    else{
        cout << "Goggi svangur!" << '\n';
    }
    return 0;
}