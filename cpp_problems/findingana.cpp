#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1001];
    cin.getline(s, 1001);
    cout << strchr(s, 'a') << endl;
    return 0;
}
