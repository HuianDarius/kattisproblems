#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a;
    bool b = true;
    int c = 0;
    while(cin >> a)
    {
        if(a =='|')
        {
            if(b == true)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        else
        {
            if(a == ')')
            {
                b = false;
            }
        }
    }
    if(c == 0)
    {
        cout << "correct" << endl;
    }
    else
    {
        cout << "fix" << endl;
    }
    return 0;
}