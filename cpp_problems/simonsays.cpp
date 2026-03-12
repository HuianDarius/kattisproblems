#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[101], s2[] = "Simon says";
    int n, len = strlen(s2);
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cin.getline(s1, 101);
        if(strstr(s1, s2))
        {
            cout << strcpy(s1, s1+len) << endl;
        }
    }
    return 0;
}
