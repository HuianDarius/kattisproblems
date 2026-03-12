#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100], s1[101], s2[101], s3[101];
    cin.getline(s, 100);
    int ln = strlen(s);
    strncpy(s1, s, ln / 3);
    s1[ln/3] = 0;
    strncpy(s2, &s[ln / 3], ln / 3);
    s2[ln/3] = 0;
    strncpy(s3, &s[ln - (ln / 3)], ln / 3);
    s3[ln/3] = 0;
    if(strcmp(s1, s2) == 0)
    {
        cout << s1 << endl;
    }
    else if(strcmp(s1, s3) == 0)
    {
        cout << s1 << endl;
    }
    else if(strcmp(s2, s3) == 0)
    {
        cout << s2 << endl;
    }
    return 0;
}
