#include <bits/stdc++.h>
using namespace std;
struct ingredient
{
    string name;
    double weight, percent;
};
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int r, p, d;
        cin >> r >> p >> d;

        double s;
        vector<ingredient> v;
        double rw;
        s = double(d) / double(p);
        for(int j = 0; j < r; j++)
        {
            string n;
            double w, p;
            cin >> n >> w >> p;
            if(p == 100.0)
            {
                rw = w;
            }
            ingredient i = {n, w, p};
            v.push_back(i);
        }
        cout << "Recipe # " << i + 1 << endl;
        for(int j = 0; j < r; j++)
        {
            double pr = rw * (v[j].percent / 100) * s;
            cout << v[j].name << " ";
            cout << fixed << setprecision(1) << pr << endl;
        }
        cout << "----------------------------------------" << endl;
    }
    return 0;
}
