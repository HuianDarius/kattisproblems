#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[31], s2[3] = "ss";
    cin.getline(s1, 31);
    if(strstr(s1, s2) != 0)
    {
        cout << "hiss" << endl;
    }
    else
    {
        cout << "no hiss" << endl;
    }
    return 0;
}
