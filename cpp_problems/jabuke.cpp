#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x, y;
};
double getarea(point p1, point p2, point p3)
{
    vector<point> v = {p1, p2, p3};
    double a = 0;
    for(int i = 0, j = 1; i < 3; i++, j = (j + 1) % 3)
    {
        a+= v[i].x * v[j].y;
        a-= v[j].x * v[i].y;
    }
    return a / 2;
}
bool left(point p1, point p2, point p3)
{
    return ((p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x)) >= 0;
}
int main()
{
    point p1, p2, p3;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    cin >> p3.x >> p3.y;
    int p;
    cin >> p;
    double a = getarea(p1, p2, p3);
    if(a < 0)
    {
        swap(p3, p1);
        a = -a;
    }
    cout << fixed << setprecision(1);
    cout << a << endl;
    int t = 0;
    while (p--)
    {
        point b;
        cin >> b.x >> b.y;
        if(left(p1, p2, b) && left(p2, p3, b) && left(p3, p1, b))
        {
            t++;
        }
    }
    cout << t << endl;
    return 0;
}
