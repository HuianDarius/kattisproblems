#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[251];
    cin.getline(s, 251);
    int len = strlen(s);
    char c = s[0];
    for(int i = 1; i <= len; i++)
    {
        if(c != s[i])
        {
            cout << c;
            c = s[i];
        }
    }
    cout << endl;
    return 0;
}
