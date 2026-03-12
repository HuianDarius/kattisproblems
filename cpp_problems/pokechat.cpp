#include <bits/stdc++.h>
using namespace std;

int main() {
    string alfabet, cod;
    getline(cin, alfabet);
    getline(cin, cod);
    string mesaj = "";
    for (size_t i = 0; i < cod.size(); i += 3) {
        string grup = cod.substr(i, 3);
        int poz = stoi(grup);
        mesaj+= alfabet[poz - 1];
    }
    cout << mesaj << "\n";
    return 0;
}
