#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[2049];
    cin.getline(s, 2049);
    int slen = strlen(s);
    for(int i = 0; i < slen; i++)
    {
        if(s[i] == ':' || s[i] == ';')
        {
            if(s[i + 1] == '-')
            {
                if(s[i + 2] == ')')
                {
                    cout << i << endl;
                }
            }
            else if(s[ i + 1] == ')')
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
