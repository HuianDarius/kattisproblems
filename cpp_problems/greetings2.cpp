#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << "h";
    for(int i = 1; i < s.length(); i++)
    {
        if(s.at(i) == 'e')
        {
            cout << "ee";
        }
    }
    cout << "y";
    return 0;
}