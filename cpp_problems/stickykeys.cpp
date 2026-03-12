#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1001];
    cin.getline(s, 1001);
    int slen = strlen(s);
    for (int i = 0; i < slen; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}