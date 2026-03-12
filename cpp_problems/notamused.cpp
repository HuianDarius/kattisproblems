#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count = 1;
    map<string, vector<int>> t1;
    bool first = true;
    while(cin >> s)
    {
        if(s == "OPEN")
        {
            if(first)
            {
                first = false;
            }
            else
            {
                cout << endl;
            }
            cout << "Day " << count << endl;
            count++;
            continue;
        }
        if(s == "CLOSE")
        {
            for(auto i : t1)
            {
                double total = 0;
                for(int j = 0; j < i.second.size(); j+= 2)
                {
                    total+= i.second[j + 1] - i.second[j];
                }
                total/= 10;
                cout << fixed;
                cout.precision(2);
                cout << i.first << " $" << total << endl;
            }
            t1.clear();
            continue;
        }
        string n;
        int t2;
        cin >> n >> t2;
        t1[n].push_back(t2);
    }
    return 0;
}