#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    int lg = strlen(s);
    for(int i = 0; i < lg; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
