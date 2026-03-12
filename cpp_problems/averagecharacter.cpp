#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    int num = 0, letters = 0;
    cin.getline(s, 101);
    int lg = strlen(s);
    for(int i = 0; i < lg; i++)
    {
        num+= 1;
        letters+= s[i];
    }
    cout << char(letters / num) << endl;
    return 0;
}
