#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    int ch[26] = {0};
    for(int i = 0; i < n; i++)
    {
        getline(cin >> ws, s);
        int ch[26] = {0};
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] >= 'a' && s[j] <= 'z')
            {
                ch[s[j] - 'a']+= 1;
            }
            else if(s[j] >= 'A' && s[j] <= 'Z')
            {
                ch[s[j] - 'A']+= 1;
            }
        }
        int c = 0;
        for(int k = 0; k < 26; k++)
        {
            if(ch[k] == 0)
            {
                c++;
                break;
            }
        }
        if(c == 0)
        {
            cout << "pangram" << endl;
        }
        else
        {
            cout << "missing ";
            for(int l = 0; l < 26; l++)
            {
                if(ch[l] == 0)
                {
                    cout << char('a' + l);
                }
            }
            cout << endl;
        }
    }
    return 0;
}