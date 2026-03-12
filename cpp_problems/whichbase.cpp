#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        int eu = b;
        cout << i + 1 << " ";
        int b10 = 0;
        int pv = 1;
        int b8 = b;
        while(b8 != 0)
        {
            int dig = b8 % 10;
            if(dig >= 8)
            {
                b10 = 0;
                break;
            }
            b10+= dig * pv;
            b8 = b8 / 10;
            pv = pv * 8;
        }
        cout << b10 << " ";
        int b20 = 0;
        int pvv = 1;
        int b16 = b;
        while(b16 != 0)
        {
            int digt = b16 % 10;
            if(digt >= 16)
            {
                b20 = 0;
                break;
            }
            b20+= digt * pvv;
            b16 = b16 / 10;
            pvv = pvv * 16;
        }
        cout << eu << " " << b20 << endl;
    }
    return 0;
}
