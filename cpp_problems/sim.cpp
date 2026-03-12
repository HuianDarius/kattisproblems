#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        list<char> lst;
        auto it = lst.begin();
        for (char ch : s) {
            if (ch == '<') {
                if (it != lst.begin()) it = lst.erase(prev(it));
            } else if (ch == '[') {
                it = lst.begin();
            } else if (ch == ']') {
                it = lst.end();
            } else {
                it = lst.insert(it, ch);
                ++it;
            }
        }
        for (char ch : lst) {
            cout << ch;
        }
        cout << "\n";
    }
}
