#include <iostream>

using namespace std;

int main()
{
    string text, vowels = "aiueoAIUEO";
    int cnt = 0;
    getline(cin, text);
    for(int i = 0; i < text.length(); i++)
    {
        if(vowels.find(text[i]) != string::npos)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
