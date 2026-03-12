#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> vars(26, false);
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if(c == 'T')
        {
            vars[i] = true;
        }
    }
    char crt;
    vector<bool> st;
    while(cin >> crt)
    {
        if(crt >= 'A' && crt <= 'Z')
        {
            st.push_back(vars [crt-'A']);
        }
        else if(crt == '+')
        {
            bool v1 = st.back();
            st.pop_back();
            bool v2 = st.back();
            st.pop_back();
            st.push_back(v1 || v2);
        }
        else if(crt == '*')
        {
            bool v1 = st.back();
            st.pop_back();
            bool v2 = st.back();
            st.pop_back();
            st.push_back(v1 && v2);
        }
        else
        {
            bool v1 = st.back();
            st.pop_back();
            st.push_back(!v1);
        }
    }
    if(st.back() == true)
    {
        cout << "T";
    }
    else
    {
        cout << "F";
    }
    return 0;
}