#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    for (int k = 0; k < c; k++)
    {
        int CS, E;
        cin >> CS >> E;
        int ACS[CS];
        int AE[E];
        for (int i = 0; i < CS; i++)
        {
            cin >> ACS[i];
        }
        for (int i = 0; i < E; i++)
        {
            cin >> AE[i];
        }

        long double CSAverage = 0.0;
        long double EAverage = 0.0;
        for (int i = 0; i < CS; i++)
        {
            CSAverage += ACS[i];
        }
        CSAverage /= CS;
        for (int i = 0; i < E; i++)
        {
            EAverage += AE[i];
        }
        EAverage /= E;

        int res = 0;
        for (int i = 0; i < CS; i++)
        {
            if(CSAverage > (long double)ACS[i] && (double)ACS[i] > EAverage)
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}