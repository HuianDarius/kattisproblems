#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10001];
    cin.getline(s, 10001);
    int ln = strlen(s);
    for(int i = 0; i < ln; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            s[i]+= 32;
        }
    }
    for(int i = 0; i < ln; i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            if(s[i] == 'a')
            {
                cout << "@";
            }
            else if(s[i] == 'b')
            {
                cout << "8";
            }
            else if(s[i] == 'c')
            {
                cout << "(";
            }
            else if(s[i] == 'd')
            {
                cout << "|)";
            }
            else if(s[i] == 'e')
            {
                cout << "3";
            }
            else if(s[i] == 'f')
            {
                cout << "#";
            }
            else if(s[i] == 'g')
            {
                cout << "6";
            }
            else if(s[i] == 'h')
            {
                cout << "[-]";
            }
            else if(s[i] == 'i')
            {
                cout << "|";
            }
            else if(s[i] == 'j')
            {
                cout << "_|";
            }
            else if(s[i] == 'k')
            {
                cout << "|<";
            }
            else if(s[i] == 'l')
            {
                cout << "1";
            }
            else if(s[i] == 'm')
            {
                cout << "[]" << char(92) << "/[]";
            }
            else if(s[i] == 'n')
            {
                cout << "[]" << char(92) << "[]";
            }
            else if(s[i] == 'o')
            {
                cout << "0";
            }
            else if(s[i] == 'p')
            {
                cout << "|D";
            }
            else if(s[i] == 'q')
            {
                cout << "(,)";
            }
            else if(s[i] == 'r')
            {
                cout << "|Z";
            }
            else if(s[i] == 's')
            {
                cout << "$";
            }
            else if(s[i] == 't')
            {
                cout << "']['";
            }
            else if(s[i] == 'u')
            {
                cout << "|_|";
            }
            else if(s[i] == 'v')
            {
                cout << char(92) << "/";
            }
            else if(s[i] == 'w')
            {
                cout << char(92) << "/" << char(92) << "/";
            }
            else if(s[i] == 'x')
            {
                cout << "}{";
            }
            else if(s[i] == 'y')
            {
                cout << "`/";
            }
            else if(s[i] == 'z')
            {
                cout << "2";
            }
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}
