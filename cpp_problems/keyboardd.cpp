#include <iostream>
#include <cstring>
using namespace std;
using ll = long long;

int main()
{
    char s1[1001], s2[1001];
    cin.getline(s1, 1001);
    cin.getline(s2, 1001);
    int ss1[27], ss2[27];
    ll lns1 = strlen(s1), lns2 = strlen(s2);
    for (int i = 0; i < 27; i++)
    {
        ss1[i] = 0;
        ss2[i] = 0;
    }
    for (int i = 0; i < lns1; i++)
    {
        if (s1[i] == ' ')
        {
            ss1[26]++;
        }
        else
        {
            ss1[s1[i] - 'a']++;
        }
    }
    for (int i = 0; i < lns2; i++)
    {
        if (s2[i] == ' ')
        {
            ss2[26]++;
        }
        else
        {
            ss2[s2[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (ss1[i] != ss2[i])
        {
            cout << char('a' + i);
        }
    }
    if (ss1[26] != ss2[26])
    {
        cout << ' ';
    }
    return 0;
}
