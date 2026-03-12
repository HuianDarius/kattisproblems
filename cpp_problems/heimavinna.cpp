#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    size_t i = 0;
    while (i < s.size()) {
        int a = 0;
        while (i < s.size() && isdigit(s[i])) {
            a = a * 10 + (s[i] - '0');
            i++;
        }
        if (i < s.size() && s[i] == '-') {
            i++;
            int b = 0;
            while (i < s.size() && isdigit(s[i])) {
                b = b * 10 + (s[i] - '0');
                i++;
            }
            ans += b - a + 1;
        } else {
            ans++;
        }
        if (i < s.size() && s[i] == ';') i++;
    }
    cout << ans << "\n";
    return 0;
}
