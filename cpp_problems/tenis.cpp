#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n;
    cin >> n;
    cin.get();
    for(int i = 0; i < n; i++)
    {
        string s3;
        getline(cin, s3);
        vector<int> v1;
        int m = 0;
        for(int j = 0; j < s3.size(); j++)
        {
            if(j == s3.size() - 1)
            {
                m*= 10;
                m+= s3[j] - '0';
            }
            if(s3[j] == ':' || s3[j]==' ' || j == s3.size() - 1)
            {
                v1.push_back(m);
                m=0;
            }
            else
            {
                m*= 10;
                m+= s3[j]-'0';
            }
        }
        vector<pair<int, int>> v2;
        bool ok = true;
        for(int i = 0; i < v1.size(); i+= 2)
        {
            v2.push_back(make_pair(v1[i], v1[i + 1]));
        }
        if(v2.size() > 3 || v2.size()==1)
        {
            ok = false;
        }
        for(int i = 0; i < v1.size() / 2; i++)
        {
            if(v2[i].first == v2[i].second)
            {
                ok = false;
                break;
            }
        }
        if(v2.size() == 2)
        {
            if (v2[0].first > v2[0].second && v2[1].first < v2[1].second || v2[0].first < v2[0].second && v2[1].first > v2[1].second)
            {
                ok = false;
            }
        }
        for(int i = 0; i < v1.size() / 2; i++)
        {
            if(abs(v2[i].first - v2[i].second) > 2)
            {
                if(v2[i].first > 6 && v2[i].second < 6 || v2[i].first < 6 && v2[i].second > 6)
                {
                    ok = false;
                    break;
                }
            }
            for(int i = 0; i < v1.size() / 2; i++)
            {
                if(v2[i].first == 6 && v2[i].second == 5 || v2[i].first == 5 && v2[i].second == 6)
                {
                    ok = false;
                    break;
                }
            }
            if(v2.size() == 3)
            {
                int i = 2;
                if(v2[i].first > 6 && v2[i].second > 6 && abs(v2[i].first - v2[i].second) > 2)
                {
                    ok = false;
                }
            }
            for(int i = 0; i < 2; i++)
            {
                if(v2[i].first > 6 && v2[i].second > 6)
                {
                    if(abs(v2[i].first - v2[i].second) > 1)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            for(int i = 0; i < v1.size() / 2; i++)
            {
                if(v2[i].first < 6 && v2[i].second < 6)
                {
                    ok = false;
                    break;
                }
            }
            if(v2.size() == 3)
            {
                int i = 2;
                if(abs(v2[i].first - v2[i].second) == 1)
                {
                    ok = false;
                }
            }
        }
        if(s1 == "federer")
        {
            for(int i = 0; i < v1.size() / 2; i++)
            {
                if(v2[i].first < v2[i].second)
                {
                    ok = false;
                    break;
                }
            }
        }
        else if(s2 == "federer")
        {
            for(int i = 0; i < v1.size() / 2; i++)
            {
                if(v2[i].first > v2[i].second)
                {
                    ok = false;
                    break;
                }
            }
        }
        int pt1=0,pt2=0;
        for(int i = 0; i < v1.size() / 2; i++)
        {
            if(v2[i].first > v2[i].second)
            {
                pt1++;
            }
            else
            {
                pt2++;
            }
        }
        if(pt1 == pt2)
        {
            ok = false;
        }
        else if(pt1 - pt2 > 2 || pt2 - pt1 > 2)
        {
            ok = false;
        }
        if(ok)
        {
            cout << "da" << endl;
        }
        else
        {
            cout << "ne" << endl;
        }
    }
    return 0;
}
